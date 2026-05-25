# Student Records Management System

A terminal-based CLI application built in C to manage student records with persistent binary file storage. This is my end-of-semester project to demonstrate my C programming skills.

## Features
- Add new students
- Display all students in a formatted table
- Search student by roll number
- Sort students by CGPA (highest to lowest)
- Delete a student record
- Data persists between sessions using binary file storage

## What I Learned
- Structs and typedef in C
- File handling (fopen, fwrite, fread, fclose)
- Linear search algorithm
- Bubble sort algorithm
- Modular programming with multiple .c files
- Include guards to prevent double inclusion

## Project Structure
- `main.c` — menu and program flow
- `student.c` — struct definition, add, display and delete functions
- `file_handler.c` — save and load from binary file
- `search_sort.c` — linear search and bubble sort functions

## How to Compile
```c
gcc main.c -o student_records
```

## How to Run
```c
./student_records
```

## Tech Stack
- Language: C
- Compiler: GCC
- IDE: Visual Studio Code
- OS: Windows

## Author
Rubashree Ramanan
First Year CSE Student
SSN College of Engineering, Chennai