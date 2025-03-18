#include <stdio.h>

// Function to print the matrix
void matrixForm(int m[2][2]) {
    printf("%d %d\n", m[0][0], m[0][1]);
    printf("%d %d\n", m[1][0], m[1][1]);
}

// Function to add two matrices
void addition(int a1[2][2], int a2[2][2]) {
    int sum[2][2];
    for (int r = 0; r < 2; r++) {
        for (int c = 0; c < 2; c++) {
            sum[r][c] = a1[r][c] + a2[r][c];
        }
    }
    printf("Sum\n");
    matrixForm(sum);
}

// Function to sub two matrices
void subtract(int a1[2][2], int a2[2][2]) {
    int sub[2][2];
    for (int r = 0; r < 2; r++) {
        for (int c = 0; c < 2; c++) {
            sub[r][c] = a1[r][c] - a2[r][c];
        }
    }
    printf("subtract\n");
    matrixForm(sub);
}

// Function to multiply two matrices
void multiply(int a1[2][2], int a2[2][2]) {
    int mul[2][2];
    
    // Matrix multiplication logic
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            mul[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                mul[i][j] += a1[i][k] * a2[k][j]; // Dot product of row and column
            }
        }
    }

    // Displaying the result of matrix multiplication
    printf("Multiplication of Matrices:\n");
    matrixForm(mul);
}

// Function to transpose a matrix
void transpose(int m[2][2]) {
    int transpose[2][2]; // Transposed matrix

    // A^T[i][j]=A[j][i]
    // Transpose logic: Swap rows and columns
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            transpose[i][j] = m[j][i]; // Swap rows and columns
        }
    }

    // Print transposed matrix
    printf("Transpose of Matrix:\n");
    matrixForm(transpose);
}

//



// Function to read a matrix from input
void readMatrix(int m[2][2]) {
    for (int r = 0; r < 2; r++) {
        for (int c = 0; c < 2; c++) {
            scanf("%d", &m[r][c]);
        }
    }
}

int main() {
    int m1[2][2], m2[2][2];
    
    printf("Enter elements of first matrix:\n");
    readMatrix(m1); // Read matrix 1
    
    printf("Enter elements of second matrix:\n");
    readMatrix(m2); // Read matrix 2
    
    // Perform matrix addition
    addition(m1, m2);

    //Perform matrix subtract
    subtract(m1, m2);
    
    // Perform matrix multiplication
    multiply(m1, m2);

    // Perform transpose of the first matrix
    transpose(m1);
    
    return 0;
}
