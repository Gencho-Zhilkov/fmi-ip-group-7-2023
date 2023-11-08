#include <iostream>
#include <cassert>


void swap(int *x, int *y) {
    const int temp = *x;
    *x = *y;
    *y = temp;
}

void customSort(int *const array, const size_t n) {
    // Number of odd numbers in the array
    size_t odds = 0;

    // Split the array into odd and even numbers
    for (size_t i = 0; i < n; ++i) {
        if (array[i] % 2 != 0) {
            assert (odds <= i);
            if (odds < i) {
                swap(&array[i], &array[odds]);
            }
            odds ++;
        }
    }

    // Sort the odd numbers in ascending order
    for (size_t i = 0; i < odds; ++i) {
        for (size_t j = i + 1; j < odds; ++j) {
            if (array[i] > array[j]) {
                swap(&array[i], &array[j]);
            }
        }
    }

    // Sort even numbers in descending order
    for (size_t i = odds; i < n; ++i) {
        for (size_t j = i + 1; j < n; ++j) {
            if (array[i] < array[j]) {
                swap(&array[i], &array[j]);
            }
        }
    }
}


int main() {
    const size_t n = 9;
    int arr[n] = {12, 34, 45, 9, 8, 91, 3, 81, 20};

    customSort(arr, n);

    for (size_t i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
