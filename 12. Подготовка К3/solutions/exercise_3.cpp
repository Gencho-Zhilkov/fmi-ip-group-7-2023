#include <cassert>
#include <cstring>
#include <iostream>
#include <stdexcept>
#include <string>


const size_t MAX_SIZE = 50;


// Помощна функция за търсене на дума
bool findWord(char matrix[][MAX_SIZE], const size_t n, const size_t m,
		const char *word, const size_t i, const size_t j) {
	if (matrix[i][j] != *word) {
		return false;
	}

	matrix[i][j] = '#';

	bool found = (word[1] == '\0') || 								// Стигнали сме края
		((i > 0) && findWord(matrix, n, m, word+1, i-1, j-1)) ||	// Горе-ляво
		((j > 0) && findWord(matrix, n, m, word+1, i+1, j-1)) ||	// Долу-ляво
		((i < n) && findWord(matrix, n, m, word+1, i-1, j+1)) ||	// Горе-дясно
		((j < m) && findWord(matrix, n, m, word+1, i+1, j+1));		// Долу-дясно

	if (!found) {
		// Restore matrix[i][j] to its original value
		matrix[i][j] = *word;
	}
	return found;
}

bool findWord(char matrix[][MAX_SIZE], const size_t n, const size_t m,
		const char *word) {
	for (size_t i = 0; i < n; i++) {
		for (size_t j = 0; j < m; j ++) {
			if (findWord(matrix, n, m, word, i, j)) {
				return true;
			}
		}
	}
	return false;
}

// Приемаме, че думата се среща най-много веднъж в матрицата.
bool findAll(char matrix[][MAX_SIZE], const size_t n, const size_t m,
		const char **words, const size_t count) {
	for (size_t i = 0; i < count; i++) {
		if (!findWord(matrix, n, m, words[i])) {
			return false;
		}
	}
	return true;
}


int main() {
	// Четене на размерите на матрицата
	int n, m;
	do {
		std::cout << "Enter maxtrix dimensions: ";
		std::cin >> n >> m;
	} while (!((0 < n && n < MAX_SIZE) && (0 < m && m < MAX_SIZE)));

	// Прочитане на матрицата от stdin
	std::cout << "Enter matrix:" << std::endl;
	char matrix[MAX_SIZE][MAX_SIZE];
	for (size_t i = 0; i < n; i++) {
		for (size_t j = 0; j < m; j++) {
			std::cin >> matrix[i][j];
		}
	}

	std::cin.ignore();
	std::string word;
	std::cout << "Enter word(s):" << std::endl;
	while (std::getline(std::cin, word)) {
		std::cout << findWord(matrix, n, m, word.c_str()) << std::endl;
	}

	return 0;
}

int main2() {
	// Четене на размерите на матрицата
	int n, m;
	do {
		std::cout << "Enter maxtrix dimensions: ";
		std::cin >> n >> m;
	} while (!((0 < n && n < MAX_SIZE) && (0 < m && m < MAX_SIZE)));

	// Прочитане на матрицата от stdin
	char matrix[MAX_SIZE][MAX_SIZE];
	for (size_t i = 0; i < n; i++) {
		for (size_t j = 0; j < m; j++) {
			std::cin >> matrix[i][j];
		}
	}

	// Прочитаме броя думи
	int wordCount;
	do {
		std::cin >> wordCount;
	} while (wordCount <= 0);

	// Прочитаме думите от stdin
	char ** words = new char*[wordCount];
	for (size_t i = 0; i < wordCount; i ++) {
		int wordLength;
		do {
			std::cin >> wordLength;
		} while (wordLength <= 0);

		words[i] = new char[wordLength+1];
		std::cin.ignore();
		std::cin.getline(words[i], wordLength+1);
	}

	std::cout << std::boolalpha;
	// std::cout << findAll(matrix, n, m, words) << std::endl;
	for (size_t i = 0; i < wordCount; i ++) {
		std::cout << words[i] << ": " << findWord(matrix, n, m, words[i]) << std::endl;
	}

	// Освобождаваме паметта!
	for (size_t i = 0; i < wordCount; i ++) {
		delete[] words[i];
	}
	delete[] words;

	return 0;
}
