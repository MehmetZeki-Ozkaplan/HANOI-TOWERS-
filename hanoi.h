#ifndef HANOI_H
#define HANOI_H

#include <vector>    // Import the vector library to store the state of the towers, representing each tower's disks, allowing dynamic management of the towers.
#include <string>    // Import the string library to manage character strings.

extern std::vector<std::vector<int>> towers;                                    // Define a vector to store the state of the towers.

void drawTowers();                                                              // Draw the current state of the towers on the screen.
void moveDisk(int from, int to);                                                // Move a disk from one tower to another.
void iterativeHanoi(int numDisks, int source, int destination, int auxiliary);  // Solve the Hanoi algorithm using the iterative method.
void recursiveHanoi(int n, int source, int destination, int auxiliary);         // Solve the Hanoi problem using the recursive method.
void resetTowers(int numDisks);                                                 // Initialize the towers with a specified number of disks.

#endif // HANOI_H
