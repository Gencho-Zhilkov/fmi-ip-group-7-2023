#include <iostream>


void printKstringsHelper(char *buffer, size_t i, size_t k) {
	if (i == k) {
		// Стигнали сме до края => отпечатваме низа
		std::cout << buffer << std::endl;
	} else {
		for (char letter = 'a'; letter <= 'z'; letter ++) {
			// Добавяме всяка възможна буква на позиция `i` и даваме нататък
			buffer[i] = letter;
			printKstringsHelper(buffer, i + 1, k);
		}
	}
}

void printKstrings(size_t k) {
	char *buffer = new char[k+1]{'\0'}; // +1 за '\0'
	printKstringsHelper(buffer, 0, k);
	delete buffer;
}


int main() {
	printKstrings(3);
	return 0;
}
