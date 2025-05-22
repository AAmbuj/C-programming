# Set the minimum required version of CMake
cmake_minimum_required(VERSION 3.10)

# Define the project name and specify the language as C
project(CInterviewExamples LANGUAGES C)

# Set the C standard to C99 (or C11 if preferred)
# This ensures consistency in how the C code is compiled.
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED True) # Enforce the standard

# Add the file_processor executable
# This command tells CMake to create an executable named 'file_processor_app'
# from the source file 'src/file_processor.c'.
add_executable(file_processor_app src/file_processor.c)

# Add the file_logger executable
# This command tells CMake to create an executable named 'file_logger_app'
# from the source file 'src/file_logger.c'.
add_executable(file_logger_app src/file_logger.c)

# Optional: Print a message to the user after CMake configuration is done.
message(STATUS "CMake configuration complete for CInterviewExamples.")
message(STATUS "You can now build the executables using your chosen build system (e.g., make, ninja).")
message(STATUS "Run executables from a 'build' directory created within 'examples'.")
message(STATUS "Example: ")
message(STATUS "  cd c_interview_questions/examples")
message(STATUS "  mkdir build && cd build")
message(STATUS "  cmake ..")
message(STATUS "  make")
message(STATUS "  ./file_processor_app")
message(STATUS "  ./file_logger_app")
