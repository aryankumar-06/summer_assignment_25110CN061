#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    int matrix1[10][10], matrix2[10][10], sum[10][10];

    cout << "Enter elements of first matrix:\n";
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            cin >> matrix1[r][c];
        }
    }

    cout << "Enter elements of second matrix:\n";
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            cin >> matrix2[r][c];
        }
    }

    // Matrix Addition
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            sum[r][c] = matrix1[r][c] + matrix2[r][c];
        }
    }

    cout << "\nResultant Matrix:\n";
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            cout << sum[r][c] << " ";
        }
        cout << endl;
    }

    return 0;
}