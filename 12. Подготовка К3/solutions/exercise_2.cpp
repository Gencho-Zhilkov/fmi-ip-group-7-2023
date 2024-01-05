#include <iostream>
#include <cstring>


// Максимален размер на масива
const int MAX_SIZE = 1024;

int countDigits(int n) {
    int res = 0;
    do {
        n /= 10;
        res++;
    } while(n != 0);
    return res;
}

void shiftRight(char *str, size_t size, size_t start, size_t shift) {
    for (size_t i = size - 1; i != start - 1; i--) {
        str[i + shift] = str[i];
    }
}

bool convertToStrNumber(char str[]) {
    // Брой на срещанията на всяка буква
    int count[26] = {0};
    for (size_t i = 0; str[i] != '\0'; i++) {
        count[str[i] - 'a']++;
    }

    // Проверка дали има достатъчно място за преобразуването
    size_t newLen = 0;
    for (size_t i = 0; i < 26; i ++) {
        newLen += count[i] * countDigits(count[i]);
    }

    if (newLen + 1 > MAX_SIZE) { // +1 за '\0'
        // Недостатъчно място
        return false;
    }

    // Преобразуване на низа
    for (size_t i = 0; str[i] != '\0'; i++) {
        int num = count[str[i] - 'a'];
        int shift = countDigits(num) - 1;
        size_t = size = strlen(str) + 1; // за '\0'

        // Освобождаваме място за цифрите
        shiftRight(str, size, i+1, shift);

        // Записваме цифрите за настоящия символ
        for (int j = shift; j >= 0; j --) {
            str[i + j] = num % 10 + '0';
            num /= 10;
        }

        // Отместваме се до следващия символ
        i += shift;
    }

    return true;
}

int main() {
    // Въвеждане на низа
    char str[MAX_SIZE];
    std::cin.getline(str, MAX_SIZE);

    if (convertToStrNumber(str)) {
        // Извеждане на преобразувания низ
        std::cout << str << std::endl;
    } else {
        std::cout << "Not encoung space." << std::endl;
    }

    return 0;
}
