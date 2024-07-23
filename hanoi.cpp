#include "hanoi.h"
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<vector<int>> towers(3);                                    // Global data structure for 3 towers
const string rods = "ABC";                                        // Define the names of the towers

// Displays the current state of the towers on the screen
void drawTowers() {
    int maxHeight = 0;
    for (const auto& tower : towers) {
        if (tower.size() > maxHeight) {
            maxHeight = tower.size();
        }
    }

// Show the state of the towers by drawing each level
    for (int i = maxHeight - 1; i >= 0; --i) {
        for (int j = 0; j < towers.size(); ++j) {
            if (i < towers[j].size()) {
                for (int k = 0; k < towers[j][i]; ++k) {
                    cout << "0";                                // Define the character representing the disk
                }
            }
            else {
                cout << "|";                                    // Character representing the empty space
            }
            cout << "\t";
        }
        cout << endl;
    }
    
    // Display the names of the towers on the screen
    for (char c : rods) {
        cout << c << "\t";
    }
    cout << endl << endl;
}

// Moves a disk from one tower to another and displays the new state of the towers on the screen
void moveDisk(int from, int to) {
    towers[to].push_back(towers[from].back());
    towers[from].pop_back();
    drawTowers();                                                // Draw the updated state
}

// Solves the Hanoi problem using the iterative method
void iterativeHanoi(int numDisks, int source, int destination, int auxiliary) {
    int totalMoves = pow(2, numDisks) - 1;                       // Calculate the total number of moves
    vector<int> rodsOrder = {source, destination, auxiliary};

    // Loop for the total number of moves
    for (int i = 1; i <= totalMoves; ++i) {
        int from, to;

        // Determine the poles based on the move number
        if (i % 3 == 1) {
            from = rodsOrder[0];
            to = rodsOrder[1];
        } else if (i % 3 == 2) {
            from = rodsOrder[0];
            to = rodsOrder[2];
        } else {
            from = rodsOrder[1];
            to = rodsOrder[2];
        }

        // Ensure from is always the non-empty tower
        if (towers[from].empty()) {
            swap(from, to);
        } else if (!towers[to].empty() && towers[to].back() < towers[from].back()) {
            swap(from, to);
        }

        moveDisk(from, to);                                      // Perform the disk move
    }
}

// Solves the Hanoi problem using the recursive method
void recursiveHanoi(int n, int source, int destination, int auxiliary) {
    if (n == 1) {
        moveDisk(source, destination);                           // Perform the move for a single disk
        return;
    }

    // Move N-1 disks to the auxiliary tower
    recursiveHanoi(n - 1, source, auxiliary, destination);
    moveDisk(source, destination);                               // Move the last disk to the destination tower
    recursiveHanoi(n - 1, auxiliary, destination, source);       // Move N-1 disks back to the destination tower
}

// Initializes the towers with a specified number of disks
void resetTowers(int numDisks) {
    for (auto& tower : towers) {
        tower.clear();                                           // Clear the towers
    }

    // Place the disks on the first tower
    for (int i = numDisks; i > 0; --i) {
        towers[0].push_back(i);
    }
}
