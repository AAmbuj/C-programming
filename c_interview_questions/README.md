# C Interview Questions and Examples

## Overview

This project provides a structured collection of C programming interview questions categorized by difficulty (basic, intermediate, advanced) and practical coding examples. The aim is to help individuals prepare for C-specific technical interviews by covering a range of topics from fundamental concepts to more complex scenarios.

## Directory Structure

The project is organized as follows:

*   `basic_questions/`:
    *   `basic_questions.md`: Contains questions covering fundamental C concepts (data types, operators, control flow, basic function syntax, `sizeof`, `typedef`, preprocessor directives).
*   `intermediate_questions/`:
    *   `intermediate_questions.md`: Contains questions on more complex topics like pointers, memory management (`malloc`, `free`), arrays, strings, recursion, storage classes, `struct` and `union`.
*   `advanced_questions/`:
    *   `advanced_questions.md`: Contains questions on advanced topics such as complex data structures (linked lists, hash tables), algorithms, advanced file I/O, function pointers, and the C preprocessor.
*   `examples/`:
    *   `src/`: Contains the source code for the C coding examples.
        *   `file_processor.c`: Source code for an application that reads a text file, counts lines and words.
        *   `file_logger.c`: Source code for an application that takes user input and appends it to a log file.
    *   `input.txt`: Sample input data for the `file_processor_app` example. Located in `c_interview_questions/examples/`.
    *   `log.txt`: Log file used by the `file_logger_app` example. Located in `c_interview_questions/examples/`.
    *   `CMakeLists.txt`: The CMake build script for compiling the coding examples. Located in `c_interview_questions/examples/`.

## How to Use

### Navigating Questions

Simply navigate to the respective markdown files within the `basic_questions`, `intermediate_questions`, or `advanced_questions` directories to view the questions.

### Building and Running Coding Examples

The coding examples are located in the `examples/src/` directory and can be built using CMake.

1.  **Navigate to the examples directory:**
    ```bash
    cd c_interview_questions/examples
    ```

2.  **Create a build directory and change into it:**
    (This is a common practice for out-of-source builds with CMake)
    ```bash
    mkdir build
    cd build
    ```

3.  **Run CMake to configure the project:**
    (This command looks for `CMakeLists.txt` in the parent directory, which is `c_interview_questions/examples/`)
    ```bash
    cmake ..
    ```

4.  **Compile the project using Make:**
    (Or your chosen build system, e.g., `ninja`)
    ```bash
    make
    ```

5.  **Run the executables:**
    The compiled executables (`file_processor_app` and `file_logger_app`) will be located in the `build` directory.
    *   To run the file processor:
        ```bash
        ./file_processor_app
        ```
        This application reads from `c_interview_questions/examples/input.txt`. The path `../input.txt` is hardcoded in `file_processor.c` relative to the executable's location in the `build` directory.

    *   To run the file logger:
        ```bash
        ./file_logger_app
        ```
        This application will prompt you for input and append it to `c_interview_questions/examples/log.txt`. The path `../log.txt` is hardcoded in `file_logger.c` relative to the executable's location in the `build` directory.

## Questions & Examples Details

### Question Categories:

*   **Basic Questions:** Focus on foundational C language features, syntax, and core concepts.
*   **Intermediate Questions:** Cover more involved topics including pointers, dynamic memory allocation, complex array/string manipulation, and intermediate data structures.
*   **Advanced Questions:** Delve into complex data structures, algorithms, advanced file operations, function pointers, and sophisticated use of the C preprocessor. Specific questions are marked if they are intended to have accompanying detailed coding examples in the future.

### Coding Examples:

1.  **`file_processor_app`** (Source: `examples/src/file_processor.c`)
    *   **Demonstrates:** Reading from a text file (`input.txt`), basic text processing (counting lines and words), and error handling for file operations.
    *   **Input:** `c_interview_questions/examples/input.txt`
    *   **Output:** Prints line and word counts to the console.

2.  **`file_logger_app`** (Source: `examples/src/file_logger.c`)
    *   **Demonstrates:** Taking user input, appending text to a file (`log.txt`), creating a file if it doesn't exist, and error handling for file operations.
    *   **Input:** User-provided text via the console.
    *   **Output:** Appends input to `c_interview_questions/examples/log.txt` and prints a success message to the console.

This project aims to be a helpful resource for C interview preparation. Good luck!
