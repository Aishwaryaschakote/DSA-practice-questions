#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Taking input for matrix dimensions
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int arr1[rows][cols], arr3[cols][rows];  // Declare matrices with correct sizes

    // Taking input for the matrix
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr1[i][j];
        }
    }

    // Printing original matrix
    cout << "Original Matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

    // Transposing matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr3[j][i] = arr1[i][j];  // Swap rows and columns
        }
    }

    // Printing transposed matrix
    cout << "Transposed Matrix:\n";
    for (int i = 0; i < cols; i++) {  // Rows become columns in transpose
        for (int j = 0; j < rows; j++) {  // Columns become rows
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

