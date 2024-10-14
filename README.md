# Numerical Integration Program

## Project Description
This project is designed to compute definite integrals using the rectangle method. It supports several trigonometric functions and allows the user to choose between left, right, or middle rectangles for integration. The tool is ideal for educational purposes or practical applications in various scientific fields.

## Key Features
- Numerical integration using the rectangle method (left, right, and middle).
- Supports trigonometric functions such as sin(x), cos(x), tan(x), and cot(x).
- Input validation for function choice, boundaries, and segments.
- Option to display intermediate results and re-run the program.

## Installation
1. Clone the repository:
    ```bash
    git clone https://github.com/Kodj1/RectangleMethod
    ```
2. Navigate to the project directory:
    ```bash
    cd ~/RectangleMethod
    ```
3. Compile the project:
    ```bash
    g++ -o integration main.cpp integration_methods.cpp function.cpp input_validation.cpp
    ```
4. Run the program:
    ```bash
    ./integration
    ```

## Usage
1. Choose a function for integration.
2. Enter the boundaries of integration.
3. Select the method of integration (left, right, or midpoint).
4. Input the number of segments.
5. View the result.

## System Requirements
- Operating System: Linux, macOS, or any POSIX-compliant system.
- Compiler: g++ or any C++14-compatible compiler.
