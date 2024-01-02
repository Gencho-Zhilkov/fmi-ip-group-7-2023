#include <iostream>


// Функция за генериране на следващия член на редицата "погледни и кажи"
size_t* nextTerm(const size_t* term, size_t& length) {
    size_t* newTerm = new size_t[2 * length]; // Максимално възможният размер
    size_t count = 1, pos = 0;

    for (size_t i = 1; i < length; i++) {
        if (term[i] == term[i - 1]) {
            count++;
        } else {
            newTerm[pos++] = count;
            newTerm[pos++] = term[i - 1];
            count = 1;
        }
    }

    // Добавяне на последната последователност
    newTerm[pos++] = count;
    newTerm[pos++] = term[length - 1];

    length = pos; // Обновяване на дължината на новия член
    return newTerm;
}

int main() {
    size_t n;
    std::cout << "Enter the number of terms: ";
    std::cin >> n;

    size_t* term = new size_t[1] {1}; // Първият член е винаги 1
    size_t length = 1;

    for (size_t i = 0; i < n; i++) {
        // Отпечатване на текущия член
        for (size_t j = 0; j < length; j++) {
            std::cout << term[j];
        }
        std::cout << std::endl;

        size_t* next = nextTerm(term, length);
        delete[] term; // Освобождаване на стария член
        term = next;   // Прехвърляне към новия член
    }

    delete[] term; // Освобождаване на последния член
    return 0;
}
