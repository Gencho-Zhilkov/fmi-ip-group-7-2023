#include <iostream>

int main() {
    int row;
    char column;
    std::cin >> column >> row;

    if (row < 1 || row > 8 || column < 'a' || column > 'h') {
        std::cerr << "Error: Invalid input." << std::endl;
        return 1;
    }

    bool isWhite = ((row - 1) + (column - 'a')) % 2 != 0;
    std::cout << (isWhite ? "White" : "Black") << std::endl;

    return 0;
}
