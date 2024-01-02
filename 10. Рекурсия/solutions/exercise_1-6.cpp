#include <iostream>
#include <stdexcept>


// Задача 1
unsigned fibonacci(unsigned n) {
	if (n <= 1) {
		return n;
	}
	return fibonacci(n - 1) + fibonacci(n - 2);
}

// Задача 2
void findMinMaxHelper(const int* arr, size_t n, int& min, int& max) {
	if (arr[n - 1] < min) {
		min = arr[n - 1];
	}
	if (arr[n - 1] > max) {
		max = arr[n - 1];
	}
	if (n > 0) {
		findMinMaxHelper(arr, n - 1, min, max);
	}
}

void findMinMax(const int* arr, size_t n, int& min, int& max) {
	if (n == 0) {
		throw std::invalid_argument("Min/Max of empty array!");
	}
	min = max = arr[n - 1];
	findMinMaxHelper(arr, n - 1, min, max);
}

// Задача 3
double average(const double* arr, size_t n) {
	if (n == 1) {
		return arr[0];
	} else {
		return (arr[n-1] + (n - 1) * average(arr, n - 1)) / n;
	}
}

// Задача 4
bool isAlpha(char c) {
	return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

void removeNonAlphaHelper(char* read, char* write) {
	if (*read == '\0') {
		*write = '\0';
	} else {
		if (isAlpha(*read)) {
			*write = *read;
			write ++;
		}
		removeNonAlphaHelper(read + 1, write);
	}
}

void removeNonAlpha(char* str) {
	removeNonAlphaHelper(str, str);
}


// Задача 5
bool isPrime(size_t n, size_t i = 2) {
	if (n < 2) {
		return false;
	}
	if (n % i == 0) {
		return false;
	}
	if (i * i > n) {
		return true;
	}
	return isPrime(n, i + 1);
}

// Задача 6
bool isDigit(char c) {
    return c >= '0' && c <= '9';
}

int atoiHelper(const char* str, int result) {
	if (*str == '\0') {
		return result;
	}
    if (!isDigit(*str)) {
        throw std::invalid_argument("Invalid input string");
    }

    int digit = *str - '0';
    return atoiHelper(str + 1, result * 10 + digit);
}

int atoi(const char* str) {
	if (str[0] == '\0') {
		throw std::invalid_argument("Empty string");
	}

	return (str[0] == '-') ? -atoiHelper(str + 1, 0) : atoiHelper(str, 0);
}


// Примерни извиквания
int main() {
	std::cout << std::boolalpha;

	// Задача 1
	std::cout << "Fibonacci of 5: " << fibonacci(5) << std::endl;

	// Задача 2
	int arr[] = {1, 2, 3, 4, 5};
	int min, max;
	findMinMax(arr, 5, min, max);
	std::cout << "Min: " << min << ", Max: " << max << std::endl;

	// Задача 3
	double arrD[] = {1.0, 2.0, 3.0, 4.0, 5.0};
	std::cout << "Average: " << average(arrD, 5) << std::endl;

	// Задача 4
	char str[] = "Hello 123!";
	removeNonAlpha(str);
	std::cout << "Non-alpha removed: " << str << std::endl;

	// Задача 5
	std::cout << "7 is prime: " << isPrime(7) << std::endl;

	// Задача 6
	try {
		std::cout << "atoi(\"1234\"): " << atoi("1234") << std::endl;
	} catch (const std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	return 0;
}

