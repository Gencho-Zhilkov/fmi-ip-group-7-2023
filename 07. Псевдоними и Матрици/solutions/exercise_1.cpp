#include <iostream>


const int MAX_SIZE = 100; // Променете според нуждите

// Помощна функция за отпечатване на двумерен масив
void printArray(int arr[][MAX_SIZE], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int m, n;
    int matrix[MAX_SIZE][MAX_SIZE];

    // Четене на броя редове и колони
    std::cout << "Enter number of rows (m) and columns (n): ";
    std::cin >> m >> n;

    if (m > MAX_SIZE || n > MAX_SIZE) {
        std::cout << "Size is too large!" << std::endl;
        return 1;
    }

    // Четене на стойностите за масива
    std::cout << "Enter " << m * n << " elements:" << std::endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> matrix[i][j];
        }
    }

    // Отпечатване на масива
    std::cout << "The matrix is:" << std::endl;
    printArray(matrix, m, n);

    return 0;
}
