#include <iostream>
#include <cmath>


// Задача 1: Проверява дали число е четно
bool isEven(int number) {
    return number % 2 == 0;
}

// Задача 2: Пресмята факториел на число
unsigned long long factorial(unsigned int n) {
    unsigned long long result = 1;
    for (unsigned int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Задача 3: Обръща цифрите на дадено число
unsigned long long reverseNumber(unsigned long long n) {
    unsigned long long reversed = 0;
    while (n > 0) {
        // Добавя последната цифра от n към обратното число,
        // след което я маха от n
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}

// Задача 4: Проверява дали число е палиндром
bool isPalindrome(unsigned long long number) {
    // Сравнява числото с неговата обратна форма
    return number == reverseNumber(number);
}

// Задача 5: Проверява дали число е съвършено
bool isPerfect(int number) {
    int sum = 1;
    for (int i = 2; i <= number / 2; i++) {
        // Натрупва сума на всички делители на числото
        if (number % i == 0) {
            sum += i;
        }
    }
    // Проверява дали сумата на делителите е равна на самото число
    return sum == number;
}

// Задача 6: Пресмята разстоянието между две точки
double distanceBetweenPoints(double x1, double y1, double x2, double y2) {
    // Използва Питагоровата теорема за изчисляване на разстоянието
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Задача 7: Пресмята разстоянието от точка до окръжност
double distanceFromPointToCircle(double x, double y, double centerX, double centerY, double radius) {
    // Използва задача 6 за да намери на разстоянието до центъра
     // и изважда радиуса
    double distanceToCenter = distanceBetweenPoints(x, y, centerX, centerY);
    return abs(distanceToCenter - radius);
}

// Задача 8: Пресмята скаларното произведение на два вектора
double dotProduct(double x1, double y1, double x2, double y2) {
    // Умножава съответните координати на векторите и ги сумира
    return x1 * x2 + y1 * y2;
}

// Задача 9: Пресмята ъгъла между два вектора
double angleBetweenVectors(double x1, double y1, double x2, double y2) {
    // Използва скаларното произведение и дължините
    // на векторите за изчисление на ъгъла
    double dot = dotProduct(x1, y1, x2, y2);
    double magnitude1 = sqrt(x1 * x1 + y1 * y1);
    double magnitude2 = sqrt(x2 * x2 + y2 * y2);
    return acos(dot / (magnitude1 * magnitude2)) * (180.0 / M_PI);
}


// Примерни извиквания на функциите
int main() {
    // Задача 1.
    std::cout << std::boolalpha;
    std::cout << "Is 4 even? " << isEven(4) << std::endl;
    std::cout << "Is 5 even? " << isEven(5) << std::endl;

    // Задача 2.
    std::cout << "Factorial of 5: " << factorial(5) << std::endl;

    // Задача 3.
    std::cout << "Reverse of 1234: " << reverseNumber(1234) << std::endl;

    // Задача 4.
    std::cout << "Is 12321 a palindrome? " << isPalindrome(12321) << std::endl;

    // Задача 5.
    std::cout << "Is 28 a perfect number? " << isPerfect(28) << std::endl;

    // Задача 6.
    std::cout << "Distance between (1, 1) and (4, 5): " << distanceBetweenPoints(1, 1, 4, 5) << std::endl;

    // Задача 7.
    std::cout << "Distance from (1, 1) to circle at (0, 0) with radius 2: " << distanceFromPointToCircle(1, 1, 0, 0, 2) << std::endl;

    // Задача 8.
    std::cout << "Dot product of vectors (1, 2) and (3, 4): " << dotProduct(1, 2, 3, 4) << std::endl;

    // Задача 9.
    std::cout << "Angle between vectors (1, 0) and (0, 1): " << angleBetweenVectors(1, 0, 0, 1) << " degrees" << std::endl;

    return 0;
}
