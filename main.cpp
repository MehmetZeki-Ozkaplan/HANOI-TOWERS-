#include <iostream>     // Import the iostream library for input/output operations.
#include <chrono>       // Import the chrono library for time measurement and related operations.
#include <cmath>        // Import the cmath library for mathematical operations.
#include "hanoi.h"      // Import the custom header file hanoi.h.

using namespace std;

int calculateSteps(int numDisks) {
    return pow(2, numDisks) - 1;
}

void displayComplexityAnalysis(int numDisks, int solutionMethod) {
    int steps = calculateSteps(numDisks);
    cout << "For the requested " << numDisks << " disks" << endl;
    cout << "Number of steps taken: " << steps << endl;
    cout << "Calculated time complexity: O(2^n)" << endl;
    cout << "Solution method used: " << (solutionMethod == 1 ? "Recursive" : "Iterative") << endl;
    cout << endl;
}

int main() {
    int numDisks;
    cout << "Enter the number of disks (must be a positive integer): ";
    while (!(cin >> numDisks) || numDisks <= 0) {
        cout << "Invalid input. Please enter a positive integer: ";   						// Prompt the user to enter a positive integer.
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int solutionMethod;
    cout << "Select the solution method (1: Recursive, 2: Iterative): ";
    while (!(cin >> solutionMethod) || (solutionMethod != 1 && solutionMethod != 2)) { 		// Prompt the user to select the solution method (1: Recursive, 2: Iterative).
        cout << "Invalid choice! Please select 1 for Recursive or 2 for Iterative: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    // Start the time measurement
    auto start = chrono::high_resolution_clock::now();

    resetTowers(numDisks);    																// Reset the towers according to the number of disks.
    drawTowers();    																		// Draw the initial state.

    // Solve the Hanoi problem according to the selected solution method
    if (solutionMethod == 1) {
        recursiveHanoi(numDisks, 0, 2, 1);
    } else if (solutionMethod == 2) {
        iterativeHanoi(numDisks, 0, 2, 1);
    }
    
    // End the time measurement and calculate the elapsed time
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> elapsed = end - start;
    
    // Display the analysis information and the solution time
    displayComplexityAnalysis(numDisks, solutionMethod);
    cout << "Time taken for the operation: " << elapsed.count() << " seconds" << endl;

    return 0;
}
