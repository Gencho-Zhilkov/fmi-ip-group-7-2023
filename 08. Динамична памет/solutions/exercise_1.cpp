#include <cassert>
#include <iostream>


// Максимален размер на матрицата
const size_t MAX_SIZE = 10;


// Функция за проверка дали матрица е магически квадрат
bool isMagicSquare(int matrix[][MAX_SIZE], size_t size) {
    // Проверка за валидност на размера
    assert (size <= MAX_SIZE);

    // Изчисляване на сумите на диагоналите
    int sumDiag1 = 0, sumDiag2 = 0;
    for (size_t i = 0; i < size; i++) {
        sumDiag1 += matrix[i][i];
        sumDiag2 += matrix[i][size - i - 1];
    }

    // Проверка дали сумите на диагоналите са равни
    if (sumDiag1 != sumDiag2) {
        return false;
    }

    // Проверка на сумите на редовете и колоните
    for (size_t i = 0; i < size; i++) {
        int sumRow = 0, sumCol = 0;
        for (size_t j = 0; j < size; j++) {
            sumRow += matrix[i][j];
            sumCol += matrix[j][i];
        }

        // Проверка за съответствие на сумите с тези на диагоналите
        if (sumRow != sumDiag1 || sumCol != sumDiag1) {
            return false;
        }
    }

    // Ако всички суми са равни, то матрицата е магически квадрат
    return true;
}


int main() {
    // Примерна матрица
    int matrix[MAX_SIZE][MAX_SIZE] = {
        {2, 7, 6},
        {9, 5, 1},
        {4, 3, 8}
    };

    std::cout << std::boolalpha;
    std::cout << "Is magic square: " << isMagicSquare(matrix, 3) << std::endl;

    return 0;
}
