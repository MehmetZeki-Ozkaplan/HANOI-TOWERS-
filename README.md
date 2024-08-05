# HANOI-TOWERS 

Tower of Hanoi Solver
## Contents
- [Introduction](#introduction)
- [Features](#features)
- [Project Structure](#project-structure)
- [Installation](#installation)
- [Usage](#usage)
- [Example Usage](#example-usage)
- [Contributing](#contributing)
- [License](#license)

## Introduction

Tower of Hanoi Solver is a C++ application that solves the famous Tower of Hanoi problem using both recursive and iterative methods. This project can be used for educational purposes in algorithms and data structures courses, as well as by anyone interested in this problem. The program provides a user-friendly interface and visually displays the state of the towers at each step.

## Features

-- Solution Methods: Solve the Tower of Hanoi problem using both recursive and iterative methods.
-- Step-by-Step Display: Visually display the current state of the towers at each step.
-- Time Complexity Calculation: Calculate and display the time complexity of the problem.
-- Execution Time Measurement: Measure and display the execution time of the solution.
-- User Input: Accept user input for the number of disks and the solution method.

  
## Project Structure

- main.cpp: The main entry point of the program. It takes user inputs and prints the results on the screen.
- hanoi.h: Contains function declarations and global variables.
- hanoi.cpp: Includes implementation of Tower of Hanoi algorithms and auxiliary functions.


Use Cases

-- Education: Helps students understand recursive and iterative algorithms in algorithms and data structures courses.
-- Career Development: Can be used for preparing for software engineering and programming interviews.
-- Entertainment: For anyone who enjoys solving the Tower of Hanoi problem.

How It Works

1. The user is prompted to enter the number of disks and the solution method (recursive or iterative).
2. The problem is solved using the selected method, and the state of the towers is displayed at each step.
3. The solution time is measured and displayed.
4. The time complexity is calculated and displayed. 

Getting Started
  
  Prerequisites

-- C++ compiler (e.g., g++, clang++)
-- Standard C++ library

## Installation 
  1. Clone the repository:
     
         git clone

         https://github.com/yourusername/tower-of-hanoi.  -solver.git

         cd tower-of-hanoi-solver
     
2.Compile the project:

        g++ -o hanoi main.cpp hanoi.cpp

## Usage 
  1.Run the program:
      
        ./hanoi
      
  2.Follow the on-screen prompts to enter the number of disks and choose the solution method.

## Example Usage 
//
Enter the number of disks (must be a positive integer): 3
Select the solution method (1: Recursive, 2: Iterative): 1

    Initial state:
    0   |   |
    00  |   |
    000 |   |
    A   B   C


    |   |   |
    0   |   |
    00  |   0
    A   B   C

    ...
    //

## Contribute
We welcome your contributions! Fork the repository and submit pull requests that include improvements or bug fixes. 

## License
This project is licensed under the MIT License - see LICENSE file for details.
