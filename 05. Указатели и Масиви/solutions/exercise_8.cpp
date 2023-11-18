#include <iostream>


// Изчислява Хаминговото разстояние между два масива
size_t hammingDistance(const int arr1[], const int arr2[], const size_t size) {
    size_t count = 0;
    for (size_t i = 0; i < size; i++) {
        if (arr1[i] != arr2[i]) {
            count++;
        }
    }
    return count;
}


// Примерно извикване на функцията
int main() {
    int array1[] = {1, 2, 2, 4};
    int array2[] = {1, 2, 3, 4};
    int array3[] = {1, 2, 4, 2};
    size_t size = 4;

    std::cout << hammingDistance(array1, array2, size) << std::endl;
    std::cout << hammingDistance(array1, array3, size) << std::endl;

    return 0;
}
