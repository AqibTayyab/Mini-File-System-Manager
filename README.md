# Mini File System Manager

## Purpose
The Mini File System Manager is a simple C-based program that allows users to perform basic file operations such as:
- Creating a file
- Writing data to a file
- Reading data from a file
- Deleting a file

This program demonstrates fundamental file handling in C and can be a helpful project for beginners learning about file operations.

## Features
- **User-friendly menu** for file operations
- **Supports text-based file handling** (creation, reading, writing, and deletion)
- **Uses standard C libraries** for file manipulation
- **Lightweight and fast**, suitable for small-scale applications

## Installation
To run this program, ensure you have a C compiler installed on your system. You can use GCC (GNU Compiler Collection) to compile and execute the program.

### Steps to Compile and Run:
1. **Clone the repository** (if using GitHub):
   ```sh
   git clone https://github.com/AqibTayyab/Mini-File-System-Manager.git
   cd Mini-File-System-Manager
   ```
2. **Compile the program** using GCC:
   ```sh
   gcc main.c -o main
   ```
3. **Run the program**:
   ```sh
   ./main
   ```

## Usage Guide
Upon running the program, you will see the following menu:
```
File System Manager
1. Create File
2. Write to File
3. Read File
4. Delete File
5. Exit
Enter your choice:
```

### 1. Create a File
- Select option `1`
- Enter the desired file name
- The program will create an empty file

### 2. Write to a File
- Select option `2`
- Enter the file name to write to
- Enter the text data you wish to add
- The program will save the data in the file

### 3. Read a File
- Select option `3`
- Enter the file name
- The program will display the file contents

### 4. Delete a File
- Select option `4`
- Enter the file name
- The program will delete the file if it exists

### 5. Exit
- Select option `5` to quit the program

## Example Run
```
File System Manager
1. Create File
2. Write to File
3. Read File
4. Delete File
5. Exit
Enter your choice: 1
Enter file name: test.txt
File 'test.txt' created successfully.
```

## Contributing
Contributions are welcome! If you'd like to improve this project, feel free to fork the repository, make changes, and submit a pull request.

## License
This project is open-source and available under the MIT License.

## Contact
For any issues or suggestions, feel free to reach out or open an issue on GitHub!

