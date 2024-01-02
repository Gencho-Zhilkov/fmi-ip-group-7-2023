#include <cstring>
#include <iostream>
#include <stdexcept>


// Задача 1.
bool isLower(char c) {
    return c >= 'a' && c <= 'z';
}

bool isUpper(char c) {
    return c >= 'A' && c <= 'Z';
}

bool isAlpha(char c) {
    return isLower(c) || isUpper(c);
}

bool isDigit(char c) {
    return c >= '0' && c <= '9';
}

char toUpper(char c) {
    if (isLower(c)) {
        return c - ('a' - 'A');
    }
    return c;
}

char toLower(char c) {
    if (isUpper(c)) {
        return c + ('a' - 'A');
    }
    return c;
}

int toDigit(char c) {
    return c - '0';
}

// Задача 2.
int atoi(const char* str) {
    int number = 0;
    bool isNegative = false;

    if (*str == '-') {
        isNegative = true;
        str++;
    }

    for (size_t i = 0; str[i] != '\0'; i++) {
        if (!isDigit(str[i])) {
            throw std::invalid_argument("Invalid input string");
        }
        number = number * 10 + toDigit(str[i]);
    }

    if (isNegative) {
        number = -number;
    }

    return number;
}

// Задача 3.
void removeNonAlpha(char* str) {
    size_t writeIndex = 0;
    for (size_t readIndex = 0; str[readIndex] != '\0'; readIndex++) {
        if (isAlpha(str[readIndex])) {
            str[writeIndex] = str[readIndex];
            writeIndex++;
        }
    }

    // Добавяме терминираща нула!
    str[writeIndex] = '\0';
}

// Задача 4.
void shout(char* str) {
    for (size_t i = 0; str[i] != '\0'; i++) {
        str[i] = toUpper(str[i]);
    }
}


// Задача 5.
bool isPangram(const char* str) {
    bool alphabet[26] = {false};

    for (size_t i = 0; str[i] != '\0'; i++) {
        if (isAlpha(str[i])) {
            size_t index = toLower(str[i]) - 'a';
            alphabet[index] = true;
        }
    }

    for (size_t i = 0; i < 26; i++) {
        if (!alphabet[i]) {
            return false;
        }
    }

    return true;
}

// Задача 6.
bool isPalindrome(const char* str) {
    size_t start = 0, end = strlen(str) - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            return false;
        }
        start++;
        end--;
    }

    return true;
}

// Задача 7
size_t lengthOfLongestWord(const char* str) {
    size_t maxLength = 0, currentLength = 0;

    for (size_t i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            maxLength = std::max(maxLength, currentLength);
            currentLength = 0;
        } else {
            currentLength++;
        }
    }

    // Check at the end as well!
    return std::max(maxLength, currentLength);
}


// Примерни извиквания
int main() {
    std::cout << std::boolalpha;

    // Задача 1
    char ch = 'a';
    std::cout << "isLower('a'): " << isLower(ch) << std::endl;
    std::cout << "isUpper('A'): " << isUpper('A') << std::endl;
    std::cout << "isAlpha('a'): " << isAlpha(ch) << std::endl;
    std::cout << "isDigit('1'): " << isDigit('1') << std::endl;
    std::cout << "toUpper('a'): " << toUpper(ch) << std::endl;
    std::cout << "toLower('A'): " << toLower('A') << std::endl;
    std::cout << "toDigit('1'): " << toDigit('1') << std::endl;

    // Задача 2
    const char* numStr = "1234";
    try {
        std::cout << "atoi(\"1234\"): " << atoi(numStr) << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    // Задача 3
    char strExample[] = "123 is a Number!";
    removeNonAlpha(strExample);
    std::cout << "removeNonAlpha(\"123 is a Number!\"): " << strExample << std::endl;

    // Задача 4
    char strShout[] = "Speak softly and carry a big stick.";
    shout(strShout);
    std::cout << "shout(\"Speak softly and carry a big stick.\"): " << strShout << std::endl;

    // Задача 5
    const char* pangram = "The quick brown fox jumps over a lazy dog";
    std::cout << "\"" << pangram << "\" is a pangram: " << isPangram(pangram) << std::endl;

    // Задача 6
    const char* palindrome = "racecar";
    std::cout << "\"" << palindrome << "\" is a palindrome: " << isPalindrome(palindrome) << std::endl;

    // Задача 7
    const char* sentence = "Find the length of the longest word!";
    std::cout << "Length of the longest word in \"" << sentence << "\": " << lengthOfLongestWord(sentence) << std::endl;

    return 0;
}
