#include <iostream>


// Функция за проверка дали елемент е в масива
bool contains(const int* arr, size_t size, int element) {
    for (size_t i = 0; i < size; i++) {
        if (arr[i] == element) {
            return true;
        }
    }
    return false;
}


// Функция за намиране на сечението на два масива
int* intersection(const int* arr1, size_t n1, const int* arr2, size_t n2, size_t& resSize) {
    // Максималният размер на сечението
    size_t maxSize = n1 < n2 ? n1 : n2;

    // Динамично заделяне на памет за масива на сечението
    int* res = new int[maxSize];
    resSize = 0;

    for (size_t i = 0; i < n1; i++) {
        if (contains(arr2, n2, arr1[i]) && !contains(res, resSize, arr1[i])) {
            res[resSize] = arr1[i];
            resSize++;
        }
    }

    return res;
}



// Функция за намиране на обединението на два масива
int* arrayUnion(const int* arr1, size_t n1, const int* arr2, size_t n2, size_t& resSize) {
    // Динамично заделяне на памет за обединението на масивите
    int* unionArr = new int[n1 + n2];
    resSize = 0;

    // Добавяне на елементите от първия масив
    for (size_t i = 0; i < n1; i++) {
        if (!contains(unionArr, resSize, arr1[i])) {
            unionArr[resSize] = arr1[i];
            resSize++;
        }
    }

    // Добавяне на елементите от втория масив
    for (size_t i = 0; i < n2; i++) {
        if (!contains(unionArr, resSize, arr2[i])) {
            unionArr[resSize] = arr2[i];
            resSize++;
        }
    }

    return unionArr;
}


int main() {
    int arr1[] = {1, 2, 3, 3, 3, 4, 5};
    int arr2[] = {3, 5, 7, 9};
    size_t n1 = 7, n2 = 4;

    // Сечение:
    size_t resSize;
    int* inter = intersection(arr1, n1, arr2, n2, resSize);

    std::cout << "Intersection: ";
    for (size_t i = 0; i < resSize; i++) {
        std::cout << inter[i] << " ";
    }
    std::cout << std::endl;

    // Освобождаване на паметта!
    delete[] inter;


    // Обединение:
    int* uni = arrayUnion(arr1, n1, arr2, n2, resSize);

    std::cout << "Intersection: ";
    for (size_t i = 0; i < resSize; i++) {
        std::cout << uni[i] << " ";
    }
    std::cout << std::endl;

    // Освобождаване на паметта!
    delete[] uni;

    return 0;
}
