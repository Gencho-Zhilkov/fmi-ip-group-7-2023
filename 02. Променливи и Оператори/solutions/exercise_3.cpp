#include <iostream>

int main() {
    double celsius;
    std::cin >> celsius;

    const double kelvin = celsius + 273.15;
    const double fahrenheit = 1.80 * celsius + 32.0;
    std::cout << "Temperature in Kelvin: " << kelvin << std::endl;
    std::cout << "Temperature in Fahrenheit: " << fahrenheit << std::endl;

    return 0;
}
