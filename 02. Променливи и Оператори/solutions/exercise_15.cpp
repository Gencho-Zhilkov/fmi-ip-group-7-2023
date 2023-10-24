#include <iostream>

int main() {
    double length, width, height, weight;
    std::cin >> length >> width >> height >> weight;

    // Check for valid input data
    if (length <= 0 || width <= 0 || height <= 0 || weight <= 0) {
        std::cerr << "Please enter valid data!" << std::endl;
        return 1;
    }

    bool isBulky = length > 50 || width > 50 || height > 50 || (length * width * height) > 50000;
    bool isHeavy = weight >= 5;

    if (isBulky && isHeavy) {
        std::cout << "Both" << std::endl;
    } else if (isBulky) {
        std::cout << "Bulky" << std::endl;
    } else if (isHeavy) {
        std::cout << "Heavy" << std::endl;
    } else {
        std::cout << "Neither" << std::endl;
    }

    return 0;
}
