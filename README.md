# Calculator Application

## Description

This project is a comprehensive calculator application developed in C++ using both function and inline function techniques. The application supports various arithmetic operations including addition, subtraction, multiplication, division, modulus, and power calculations. It features robust error handling to ensure valid input and includes a loop for continuous operation. The goal of this project is to provide a clear and intuitive interface for performing calculations and to demonstrate core programming concepts.

## Features

- **Addition**: Calculates the sum of two numbers.
- **Subtraction**: Calculates the difference between two numbers.
- **Multiplication**: Calculates the product of two numbers.
- **Division**: Calculates the quotient of two numbers, with error handling for division by zero.
- **Modulus**: Calculates the remainder of the division of two integers.
- **Power**: Calculates the result of raising one number to the power of another.
- **Continuous Operation**: Allows users to perform multiple calculations in a single session.

## Technologies Used

- **C++**: The programming language used to develop the application.
- **Standard Library Functions**: Used for mathematical calculations and input/output operations.

## How to Use

1. **Compile the Code**: Use a C++ compiler to compile the `main.cpp` file.
2. **Run the Application**: Execute the compiled program.
3. **Enter Data**: Follow the prompts to input two numbers and an arithmetic operator.
4. **View Results**: The application will display the result of the calculation.
5. **Repeat or Exit**: Choose to perform another calculation or exit the application.

## Code Structure

- **main.cpp**: The main file containing the function prototypes, main function, and function implementations.
  - **Function Prototypes**: Declares the functions used in the application.
  - **main()**: The main function that controls the flow of the program.
  - **enterData()**: Handles user input and ensures valid data is entered.
  - **operation()**: Determines which arithmetic operation to perform based on user input.
  - **Add()**: Inline function to add two numbers.
  - **Subtract()**: Inline function to subtract two numbers.
  - **Multiply()**: Inline function to multiply two numbers.
  - **Divide()**: Inline function to divide two numbers, with error handling for division by zero.
  - **Modulus()**: Inline function to calculate the modulus of two integers.
  - **power()**: Inline function to calculate the power of a number.

## Example Usage

```bash
$ g++ main.cpp -o calculator
$ ./calculator
Please enter two valid numbers followed by a valid operation (+, -, *, /, %, ^): 5 + 3
The addition of the two numbers is: 8

If you want to repeat the operation, choose Y. Else choose N (y/n): y

Please enter two valid numbers followed by a valid operation (+, -, *, /, %, ^): 10 / 2
The division of the two numbers is: 5

If you want to repeat the operation, choose Y. Else choose N (y/n): n
