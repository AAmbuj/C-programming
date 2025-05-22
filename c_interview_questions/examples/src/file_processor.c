#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Define the input file path relative to where the executable might be run
// Assuming the executable will be run from the root of the c_interview_questions directory
// or the examples directory itself.
#define INPUT_FILE "../input.txt" // Adjusted path

int main() {
    FILE *file;
    char buffer[1024]; // Buffer to read lines
    int line_count = 0;
    int word_count = 0;
    char *token;
    int in_word = 0; // Flag to track if currently inside a word

    // Attempt to open the input file for reading
    file = fopen(INPUT_FILE, "r");
    if (file == NULL) {
        perror("Error opening input file");
        fprintf(stderr, "Failed to open: %s\n", INPUT_FILE);
        fprintf(stderr, "Please ensure 'input.txt' exists in the 'c_interview_questions/examples/' directory.\n");
        return 1; // Indicate an error
    }

    // Read the file line by line
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        line_count++;

        // Process words in the current line
        // A simple word counter: counts sequences of non-whitespace characters
        for (int i = 0; buffer[i] != '\0'; i++) {
            if (isspace(buffer[i])) {
                if (in_word) {
                    in_word = 0; // Exited a word
                }
            } else {
                if (!in_word) {
                    word_count++; // Found the start of a new word
                    in_word = 1;  // Entered a word
                }
            }
        }
        // Reset in_word for the next line if the line ended mid-word without trailing space
        // (though fgets usually includes the newline, which isspace() handles)
        if (!isspace(buffer[strlen(buffer)-1]) && buffer[strlen(buffer)-1] != '\0') {
             // If the last char is not space and not null, and we were in a word,
             // it's fine. If we were not in a word, it means the line was empty or only whitespace
             // and word_count was not incremented, which is correct.
        }
    }

    // Check for errors after loop, e.g., if fgets failed mid-file
    if (ferror(file)) {
        perror("Error reading from file");
        fclose(file);
        return 1; // Indicate an error
    }

    // Close the file
    if (fclose(file) == EOF) {
        perror("Error closing input file");
        return 1; // Indicate an error
    }

    // Print the results
    printf("File: %s\n", INPUT_FILE);
    printf("Total lines: %d\n", line_count);
    printf("Total words: %d\n", word_count);

    return 0; // Indicate successful execution
}
