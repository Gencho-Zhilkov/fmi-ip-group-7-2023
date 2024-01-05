#include <iostream>


int main() {
    // Въвеждане на броя точки
    size_t pointsNumber;
    std::cin >> pointsNumber;

    if (!pointsNumber) {
        std::cout << "No points: Exiting!" << std::endl;
        return 0;
    }

    // Динамично заделяне на памет за точките
    double (*points)[2] = new double[pointsNumber][2];

    // Въвеждане на координатите на точките
    for (size_t i = 0; i < pointsNumber; i++) {
        std::cin >> points[i][0] >> points[i][1];
    }

    // Първоначални стойности за координатите на правоъгълника
    double minX = points[0][0], maxX = points[0][0];
    double minY = points[0][1], maxY = points[0][1];

    // Намиране на координатите на правоъгълника
    for (size_t i = 1; i < pointsNumber; i++) {
        if (points[i][0] < minX) {
            minX = points[i][0];
        }
        if (points[i][0] > maxX) {
            maxX = points[i][0];
        }
        if (points[i][1] < minY) {
            minY = points[i][1];
        }
        if (points[i][1] > maxY) {
            maxY = points[i][1];
        }
    }

    // Извеждане на резултата
    std::cout << minX << " " << maxY << " ";
    std::cout << (maxX - minX) << " " << (maxY - minY) << std::endl;

    // Освобождаване на заделената памет
    delete[] points;

    return 0;
}
