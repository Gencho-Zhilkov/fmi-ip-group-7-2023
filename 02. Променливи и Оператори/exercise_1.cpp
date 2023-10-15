#include <iostream>

int main() {
    int num1, num2;
    std::cin >> num1 >> num2;

    const double average = 0.5 * (num1 + num2);
    std::cout << "The average is: " << average << std::endl;

    return 0;
}
