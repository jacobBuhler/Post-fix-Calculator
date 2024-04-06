# Post-fix-Calculator
Post-fix stack implementation of a calculator
This project is a simple yet powerful C++ implementation of a post-fix (reverse Polish notation) calculator. Utilizing a custom dynamic stack, it efficiently evaluates expressions where operators follow their operands, eliminating the need for parentheses to denote operation precedence.
# Features
Features
Support for Basic Mathematical Operations: The calculator can perform addition, subtraction, multiplication, division, and exponentiation.
Error Handling: It includes basic error handling for invalid expressions, such as division by zero or malformed inputs.
Custom Stack Implementation: At the heart of the calculator is Dstack, a dynamically allocated stack, demonstrating a fundamental data structure's manual implementation and manipulation in C++.

How It Works
The calculator reads input from stdin until EOF is reached. Numbers and operators are processed as they are read:

Numbers: Pushed onto the stack.
Operators: The calculator pops two values from the stack, applies the operator, and pushes the result back onto the stack.
The final result is printed to stdout if the expression is valid (i.e., the stack ends with a single element).

Error Handling
Errors are thrown for invalid expressions, including attempts to perform operations with insufficient values on the stack or dividing by zero. An error message is displayed, and the program exits.

Usage
Compile with a C++ compiler supporting C++11 or later. Run the program and input a post-fix expression:

$ g++ -o post-fix-calculator main.cpp dstack.cpp -std=c++11
$ ./post-fix-calculator
1 2 + 3 *

Implementation Details
Dstack: Manages a stack of double values. It supports pushing and popping values, checking the stack's size, and whether it is empty.
Main Program: Parses input, performs operations using Dstack, and handles errors.

Contributing
Feel free to fork the project, submit pull requests, or open issues for any bugs found or enhancements.

License
This project is open-sourced under the MIT License.
