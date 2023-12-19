#include <iostream>
#include <stdexcept>
#include <cstring>
#include <cassert>


const size_t MAX_SIZE = 1024;


bool isEmptyCell(const char labyrinth[][MAX_SIZE], size_t i, size_t j) {
	// Is this an empty cell? Assumes validity check beforehand.
	return labyrinth[i][j] == ' ';
}

bool isExit(size_t i, size_t j, size_t rows, size_t cols) {
	// Have we arrived at one of the board boundaries?
	return i == 0 || i == rows - 1 || j == 0 || j == cols - 1;
}

bool findExit(char labyrinth[][MAX_SIZE],
			  size_t rows, size_t cols, size_t i, size_t j) {
	labyrinth[i][j] = '.';
	if (isExit(i, j, rows, cols)) {
		// We've found an exit: 🥳!
		return true;
	}

	// Try going in each direction in turn.
	const int directions[][2] = {{-1, 0}, {0, -1}, {0, +1}, {+1, 0}};
	for (auto& [di, dj]: directions) {
		if (isEmptyCell(labyrinth, i+di, j+dj) &&
			findExit(labyrinth, rows, cols, i+di, j+dj)) {
			return true;
		}
	}

	// No exit found: Backtrack!
	labyrinth[i][j] = 'x';
	return false;
}

void solveLabyrinth(char labyrinth[][MAX_SIZE], size_t rows, size_t cols,
					size_t startRow, size_t startCol) {
	if (!isEmptyCell(labyrinth, startRow, startCol)) {
		throw std::invalid_argument("Starting position is inside a wall!");
	}

	bool found = findExit(labyrinth, rows, cols, startRow, startCol);
	if (!found) {
		throw std::runtime_error("Could not find an exit!");
	}
}

void printLabyrint(const char labyrinth[][MAX_SIZE],
				   size_t rows, size_t cols) {
	for (size_t i = 0; i < rows; i++) {
		for(size_t j = 0; j < cols; j ++) {
			std::cout << labyrinth[i][j];
		}
		std::cout << std::endl;
	}
}


int main() {
	char labyrinth[MAX_SIZE][MAX_SIZE];
	size_t rows, cols;

	do {
		std::cout << "Enter number of rows and columns: ";
		std::cin >> rows >> cols;
	} while (rows > MAX_SIZE || cols > MAX_SIZE);

	std::cin.ignore();
	std::cout << "Enter labyrinth:" << std::endl;
	for (size_t i = 0; i < rows; i++) {
		char line[MAX_SIZE+1];	// +1 for terminating '\0'
		std::cin.getline(line, MAX_SIZE);
		if (strlen(line) != cols) {
			std::cerr << "Wrong length! Skipping line ..." << std::endl;
			i--;
		} else {
			// Using `memcpy` instead of `strcpy` here ensures that
			// we will copy only the chars, without the final '\0'.
			memcpy(labyrinth[i], line, cols);
		}
	}

	size_t startRow, startCol;
	std::cout << "Enter starting point: ";
	std::cin >> startRow >> startCol;
	std::cout << std::endl;

	try {
		solveLabyrinth(labyrinth, rows, cols, startRow, startCol);
		printLabyrint(labyrinth, rows, cols);
		return 0;
	} catch (const std::exception& ex) {
		std::cerr << ex.what() << std::endl;
		return 1;
	}
}
