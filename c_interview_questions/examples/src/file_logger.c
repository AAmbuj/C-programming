#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the log file path relative to where the executable might be run
#define LOG_FILE "../log.txt" // Adjusted path

int main() {
    FILE *file;
    char user_input[256]; // Buffer for user input

    // Prompt the user to enter a line of text
    printf("Enter a line of text to log: ");
    if (fgets(user_input, sizeof(user_input), stdin) == NULL) {
        fprintf(stderr, "Error reading user input.\n");
        return 1; // Indicate an error
    }

    // Remove trailing newline character if present (from fgets)
    user_input[strcspn(user_input, "\n")] = 0;

    // Attempt to open the log file in append mode ("a")
    // This will create the file if it doesn't exist.
    file = fopen(LOG_FILE, "a");
    if (file == NULL) {
        perror("Error opening log file");
        fprintf(stderr, "Failed to open or create: %s\n", LOG_FILE);
        return 1; // Indicate an error
    }

    // Append the user's input to the file, followed by a newline
    if (fprintf(file, "%s\n", user_input) < 0) {
        perror("Error writing to log file");
        fclose(file);
        return 1; // Indicate an error
    }

    // Close the file
    if (fclose(file) == EOF) {
        perror("Error closing log file");
        return 1; // Indicate an error
    }

    printf("Successfully logged to: %s\n", LOG_FILE);

    return 0; // Indicate successful execution
}
