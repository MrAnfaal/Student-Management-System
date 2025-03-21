# Student Grade Report

## Project Description

This C++ program is a simple student grade report system designed for a first-semester project. It allows administrators to input and manage student data, including roll numbers, marks in Computer Science and Mathematics, calculate percentages, assign grades, and perform various data management operations.

## Features

-   **Student Enrollment:**
    -      Input student roll numbers (with roll number uniqueness check).
    -      Input student marks for Computer Science and Mathematics (within 100).
    -      Calculate student percentage.
    -      Assign grades based on percentage.
-   **Data Display:**
    -      Display student data in a tabular format, including roll number, marks, percentage, and grade.
-   **Data Modification:**
    -      Update student roll numbers.
    -      Update student marks for Computer Science and Mathematics (individual or all students).
-   **Data Sorting:**
    -      Sort student data based on percentage in descending order.
-   **Data Deletion:**
    -   Delete the record of a particular student.
-   **Input Validation:**
    -   Validates roll number uniqueness.
    -   Validates marks to be within the 0-100 range.
    -   Validates user inputs for menu options.

## Getting Started

### Prerequisites

-      A C++ compiler (e.g., g++)

### Compilation

1.  Save the provided C++ code into a file named `student_grade_report.cpp`.
2.  Open a terminal or command prompt.
3.  Navigate to the directory where you saved the file.
4.  Compile the code using the following command:

    ```bash
    g++ student_grade_report.cpp -o student_grade_report
    ```

### Execution

1.  After successful compilation, run the executable:

    ```bash
    ./student_grade_report
    ```

2.  Follow the on-screen instructions to input student data and perform various operations.

## Usage

1.  **Enroll Students:**
    -      Enter student roll numbers and marks when prompted.
    -      The program will calculate percentages and assign grades automatically.
    -   Enter 'y' or 'Y' to add more students, 'n' or 'N' to finish input.
2.  **View Report:**
    -      After finishing input, the program displays a report table.
3.  **Modify Data:**
    -      Choose the desired operation from the menu (update roll number, marks, sort, delete).
    -      Follow the prompts to perform the chosen operation.
    -   After each operation the program will display the updated table.
    -   Enter 'y' or 'Y' to perform more changes, 'n' or 'N' to exit the modification menu.
4.  **Exit:**
    -   Select the exit option from the main menu to terminate the program.

## File Structure

-   `student_grade_report.cpp`: Contains the C++ source code for the student grade report system.
-   `README.md`: Contains the documentation for the project.

## Author

-   Muhammad Anfaal
-   anfaalxyz@gmail.com
