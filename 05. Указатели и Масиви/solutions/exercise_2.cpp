#include <iostream>
#include <limits>


// Връща минималния елемент в масив
double min(const double arr[], const size_t size) {
    double minValue = std::numeric_limits<double>::max();
    for (size_t i = 0; i < size; i++) {
        if (arr[i] < minValue) {
            minValue = arr[i];
        }
    }
    return minValue;
}

// Връща максималния елемент в масив
double max(const double arr[], const size_t size) {
    double maxValue = std::numeric_limits<double>::lowest();
    for (size_t i = 0; i < size; i++) {
        if (arr[i] > maxValue) {
            maxValue = arr[i];
        }
    }
    return maxValue;
}

// Връща сбора на елементите в масив
double sum(const double arr[], const size_t size) {
    double total = 0;
    for (size_t i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}

// Връща произведението на елементите в масив
double product(const double arr[], const size_t size) {
    double prod = 1;
    for (size_t i = 0; i < size; i++) {
        prod *= arr[i];
    }
    return prod;
}


// Примерни извиквания на функциите
int main() {
    double arr[] = {1.5, 2.3, 3.7, 4.2, 5.1};
    size_t size = 5;

    std::cout << "Min: " << min(arr, size) << std::endl;
    std::cout << "Max: " << max(arr, size) << std::endl;
    std::cout << "Sum: " << sum(arr, size) << std::endl;
    std::cout << "Product: " << product(arr, size) << std::endl;

    return 0;
}
