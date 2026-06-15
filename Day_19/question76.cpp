#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the order of the square matrix: ";
    cin >> n;

    int matrix[10][10];
    int diagonalSum = 0;

    cout << "Enter matrix elements:\n";
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            cin >> matrix[row][col];
        }
    }

    // Calculate diagonal sum
    for (int i = 0; i < n; i++) {
        diagonalSum += matrix[i][i];
    }

    cout << "Sum of diagonal elements = " << diagonalSum;

    return 0;
}