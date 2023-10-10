#include <iostream>

int main() {
	double a, b, c;
	std::cin >> a >> b >> c;

	if (a <= 0 || b <= 0 || c <= 0) {
		std::cerr << "Sides must be positive numbers!" << std::endl;
		return 1;
	}

	// Идея: Трябва да проверим дали най-голямата страна е по-малка от сбора
	// на другите две. Тъй като не знаем коя страна е най-голяма, проверяваме
	// и трите възможни комбинации.
	const bool isValidTriangle = (a < b + c) && (b < a + c) && (c < a + b);
	std::cout << isValidTriangle << std::endl;

	return 0;
}
