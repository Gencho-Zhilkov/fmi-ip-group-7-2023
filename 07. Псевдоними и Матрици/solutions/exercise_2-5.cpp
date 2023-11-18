#include <iostream>
#include <climits>


const int MAX_SIZE = 100; // Променете според нуждите

// Задача 2: Намиране на най-големия елемент във всеки ред и колона
void printMaxInRowsAndCols(int arr[][MAX_SIZE], int m, int n) {
    // Най-големите елементи в редовете
    for (int i = 0; i < m; i++) {
        int maxRow = INT_MIN;
        for (int j = 0; j < n; j++) {
            if (arr[i][j] > maxRow) {
                maxRow = arr[i][j];
            }
        }
        std::cout << "Max in row " << i << ": " << maxRow << std::endl;
    }

    // Най-големите елементи в колоните
    for (int j = 0; j < n; j++) {
        int maxCol = INT_MIN;
        for (int i = 0; i < m; i++) {
            if (arr[i][j] > maxCol) {
                maxCol = arr[i][j];
            }
        }
        std::cout << "Max in column " << j << ": " << maxCol << std::endl;
    }
}

// Задача 3: Проверка дали матрицата е диагонална
bool isDiagonal(int arr[][MAX_SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i != j && arr[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

// Задача 4: Проверка дали матрицата е Х-матрица
bool isXMatrix(int arr[][MAX_SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            const bool isDiagonal = (i == j || i + j == size - 1);
            if (isDiagonal && arr[i][j] == 0) {
                return false;
            } else if (!isDiagonal && arr[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

// Задача 5: Намиране на ред с най-голям сбор и колона с най-голямо произведение
void findMaxSumRowAndMaxProductColumn(int arr[][MAX_SIZE], int m, int n, int &maxSumRowIndex, int &maxProductColIndex) {
    int maxSum = INT_MIN, maxProduct = INT_MIN;

    // Намиране на реда с най-голям сбор
    for (int i = 0; i < m; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum += arr[i][j];
        }
        if (sum > maxSum) {
            maxSum = sum;
            maxSumRowIndex = i;
        }
    }

    // Намиране на колоната с най-голямо произведение
    for (int j = 0; j < n; j++) {
        int product = 1;
        for (int i = 0; i < m; i++) {
            product *= arr[i][j];
        }
        if (product > maxProduct) {
            maxProduct = product;
            maxProductColIndex = j;
        }
    }
}


// Примерни извиквания на функциите
int main() {
    int arr[MAX_SIZE][MAX_SIZE] = {
        {1, 2, 3, 4},
        {5, 6, 0, 8},
        {9, 10, 11, 0},
        {13, 0, 0, 16}
    };
    size_t m = 4; // Брой редове
    size_t n = 4; // Брой колони

    std::cout << std::boolalpha;

    // Задача 2.
    printMaxInRowsAndCols(arr, m, n);

    // Задача 3.
    std::cout << "Is Diagonal Matrix? " << isDiagonal(arr, m) << std::endl;

    // Задача 4.
    std::cout << "Is X Matrix? " << isXMatrix(arr, m) << std::endl;

    // Задача 5.
    int maxSumRowIndex, maxProductColIndex;
    findMaxSumRowAndMaxProductColumn(arr, m, n, maxSumRowIndex, maxProductColIndex);
    std::cout << "Row with Max Sum: " << maxSumRowIndex << std::endl;
    std::cout << "Column with Max Product: " << maxProductColIndex << std::endl;

    return 0;
}
