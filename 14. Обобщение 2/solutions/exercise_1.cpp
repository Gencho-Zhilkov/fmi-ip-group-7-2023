#include <iostream>


size_t char_index(const char c) {
	return c - 'a';
}

void printCombosHelper(const char **words, size_t currentWord, size_t size,
	bool *letters, const char **combos, unsigned combLen, unsigned k) {
	if (combLen == k) {
		// Намерили сме комбинация: отпечатваме я.
		for (size_t i = 0; i < combLen; i++) {
			std::cout << combos[i] << " ";
		}
		std::cout << std::endl;
	} else {
		for (size_t i = currentWord; i < size; i++) {
			const char *word = words[i];
			size_t j = 0;
			for (; word[j] != '\0'; j ++) {
				if (letters[char_index(word[j])]) {
					// Имаме конфликт
					break;
				}
				letters[char_index(word[j])] = true;
			}
			if (word[j] == '\0') {
				// Стигнали сме до края на думата: добавяме я и пробваме нататък
				combos[combLen] = word;
				printCombosHelper(words, i + 1, size, letters, combos, combLen + 1, k);
			}
			// Backtrack
			for (size_t k = 1; k <= j; k++) {
				letters[char_index(word[j - k])] = false;
			}

		}
	}
}

void printCombos(const char **words, size_t size, unsigned k) {
	bool letters[26] = {};
	const char **combos = new const char *[k];
	printCombosHelper(words, 0, size, letters, combos, 0, k);
	delete combos;
}

int main() {
	const char* words[] = {"ma", "pa", "tinge", "binge"};
	unsigned k = 2;
	printCombos(words, 4, k);
	return 0;
}
