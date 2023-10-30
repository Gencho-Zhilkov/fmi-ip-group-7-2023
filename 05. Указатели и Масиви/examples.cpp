#include <iostream>


// **Пример 1.** Дефинирайте функция, която приема два
// целочислени параметъра и разменя стойностите им.
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}


// **Пример 2.** Дефинирайте функция, която приема целочислен масив
// и връща сбора от всички негови елементи, които са четни числа.
long sumEvenElements(const int* const xs, const size_t n) {
    long res = 0;
    for (size_t i = 0; i < n; i ++) {
        if (xs[i] % 2 == 0) {
            res += xs[i];
        }
    }
    return res;
}


// **Пример 3.** Брой _"инверсии"_: Дефинирайте функция, която приема
// целочислен масив `xs` и връща броя на двойките $i, j$, такива че
// $i < j$ и $xs[i] > xs[j] $.
unsigned countInversions(const int* const xs, const size_t n) {
    unsigned res = 0;
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = i + 1; j < n; ++j) {
            res += (xs[i] > xs[j]);
        }
    }
    return res;
}


// **Пример 4.** Напишете функция, която приема целочислен масив и го
// пренарежда така, че четните числа да се намират преди нечетните.
// Функцията връща броя на четните числа.
size_t sortEven(int *nums, size_t len) {
	size_t even = 0;
	for(size_t i = 0; i < len; i++) {
		if (nums[i] % 2 == 0) {
			if (i > even) {
				swap(&nums[i], &nums[even]);
			}
			even ++;
		}
	}
	return even;
}


// **Пример 5.** Напишете функция, която приема цяло число
// и връща дали в него има повтарящи се цифри.
bool hasRepeatingDigits(long long n) {
	bool digits[10] = {};
	do {
		const int digit = n % 10;
		if (digits[digit]) {
			return true;
		}
		digits[digit] = true;
		n /= 10;
	} while (n);

	return false;
}


int main() {
	std::cout << std::boolalpha;

	int a = 5, b = 7;
	std::cout << "Before: " << a << ' ' << b << std::endl;
	swap(&a, &b);
	std::cout << "After:  " << a << ' ' << b << std::endl;

	int xs[5] = {5, 4, 3, 2, 1};
	std::cout << "Array is: ";
	for(size_t i = 0; i < 5; i ++) {
		std::cout << xs[i] << ' ';
	}
	std::cout << std::endl;

	std::cout << "Sum even elements: " << sumEvenElements(xs, 5) << std::endl;
	std::cout << "Count inversions: " << countInversions(xs, 5) << std::endl;
	std::cout << "Sort evens: " << sortEven(xs, 5) << std::endl;

	std::cout << "After sortEvent: ";
	for(size_t i = 0; i < 5; i ++) {
		std::cout << xs[i] << ' ';
	}
	std::cout << std::endl;

	for(unsigned i: {1234, 123452}) {
		std::cout << i << ' ' << hasRepeatingDigits(i) << std::endl;
	}

	return 0;
}
