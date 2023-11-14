#include <iostream>


// **Пример 1.** Дефинирайте функция, която приема два
// целочислени параметъра и разменя стойностите им.
void swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}


// **Пример 2.** Дефинирайте функция, която приема целочислен двумерен
// масив и отпечатва сбора на елементите на всеки от редовете му
static const size_t MAX_SIZE = 1024;

void sumRows(const int xs[][MAX_SIZE], const size_t rows, const size_t cols) {
    for (size_t i = 0; i < rows; i ++) {
        int res = 0;
        for (size_t j = 0; j < cols; j ++) {
            res += xs[i][j];
        }
        std::cout << res << ' ';
    }
    std::cout << std::endl;
}


int main() {
	std::cout << std::boolalpha;

	int a = 5, b = 7;
	std::cout << "Before: " << a << ' ' << b << std::endl;
	swap(a, b);
	std::cout << "After:  " << a << ' ' << b << std::endl;

	int xs[4][MAX_SIZE] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9},
		{10, 11, 12},
	};

	std::cout << "Sum of rows is: ";
	sumRows(xs, 4, 3);

	return 0;
}
