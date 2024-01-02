#include <iostream>
#include <cmath>
#include <limits>


// Функция за изчисляване на разстоянието между две точки
double calculateDistance(double point1[], double point2[]) {
    return sqrt(pow(point1[0] - point2[0], 2) + pow(point1[1] - point2[1], 2));
}


int main() {
    size_t n;
    do {
        std::cout << "Enter the number of points (min. 2): ";
        std::cin >> n;
    } while (n < 2);

    // Динамично заделяне на памет за 2D масив от точки
    double (*points)[2] = new double[n][2];

    // Въвеждане на координатите на всяка точка
    for (size_t i = 0; i < n; ++i) {
        std::cout << "Enter x and y coordinates for point " << i + 1 << ": ";
        std::cin >> points[i][0] >> points[i][1];
    }

    double minDistance = std::numeric_limits<double>::max();
    size_t closestPoint1, closestPoint2;

    // Намиране на най-близките две точки
    for (size_t i = 0; i < n - 1; ++i) {
        for (size_t j = i + 1; j < n; ++j) {
            double dist = calculateDistance(points[i], points[j]);
            if (dist < minDistance) {
                minDistance = dist;
                closestPoint1 = i;
                closestPoint2 = j;
            }
        }
    }

    // Извеждане на координатите и разстоянието между най-близките точки
    std::cout << "The closest points are ("
              << points[closestPoint1][0] << ", " << points[closestPoint1][1]
              << ") and (" << points[closestPoint2][0] << ", "
              << points[closestPoint2][1] << ") with a distance of "
              << minDistance << std::endl;

    // Освобождаване на динамично заделената памет
    delete[] points;

    return 0;
}
