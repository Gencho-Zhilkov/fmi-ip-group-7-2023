#include <iostream>

int main() {
    unsigned zero, pos, neg, k;
    std::cin >> zero >> pos >> neg >> k;

    if (k > zero + pos + neg) {
        std::cerr << "Error: Invalid value for k." << std::endl;
        return 1;
    }

    unsigned maxSum;
    if (k <= pos) {
        // Ако можем да вземем всички k жетони като +1
        maxSum = k;
    } else if (k <= pos + zero) {
        // Ако можем да вземем всички pos жетони като +1 и останалите като 0
        maxSum = pos;
    } else {
        // В противен случай взимаме всички pos и zero жетони като +1 и 0
        // и оставащите като -1.
        maxSum = pos - (k - (pos + zero));
    }

    std::cout << maxSum << std::endl;

    return 0;
}
