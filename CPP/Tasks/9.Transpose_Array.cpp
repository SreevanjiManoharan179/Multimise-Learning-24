#include <iostream>
using namespace std;

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

void transposeMatrix(int matrix[][MAX_COLS], int rows, int cols) {
    int transpose[MAX_COLS][MAX_ROWS];
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            transpose[i][j] = matrix[j][i];
        }
    }
    cout << "Transpose of the matrix:" << endl;
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> rows >> cols;
    
    int matrix[MAX_ROWS][MAX_COLS];
    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }
    
    transposeMatrix(matrix, rows, cols);
    
    return 0;
}
