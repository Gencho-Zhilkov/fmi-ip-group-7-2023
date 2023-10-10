#include <iostream>

int main() {
	const double PI = 3.14;
	double radius;

	std::cout << "Enter circle radius: ";
	std::cin >> radius;
	if (radius < 0) {
		/* Грешките се отпечатват на `cerr`, НЕ на `cout` */
		std::cerr << "Circle radius must be positive!" << std::endl;
		return 1;
	}

	const double perimeter = 2 * PI * radius;
	const double area = PI * radius * radius;

	std::cout << "Circle perimeter: " << perimeter << std::endl;
	std::cout << "Circle area: " << area << std::endl;

	return 0;
}