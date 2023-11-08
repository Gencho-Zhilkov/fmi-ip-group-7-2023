#include <iostream>

// Function to find the length of the longest subarray forming an arithmetic progression
size_t longestArithSeqLength(int *arr, size_t n) {
    // An array of length 1 or 2 is always an AP
    if (n <= 2) {
        return n;
    }

    size_t longest = 2; // Minimum length of AP is 2
    size_t currentLength = 2;
    int currentDiff = arr[1] - arr[0];

    for (size_t i = 2; i < n; i++) {
        int diff = arr[i] - arr[i - 1];
        if (diff == currentDiff) {
            currentLength++;
        } else {
            currentDiff = diff;
            currentLength = 2; // Reset to the current pair of numbers
        }
        if (currentLength > longest) {
            longest = currentLength;
        }
    }

    return longest;
}

int main() {
    int arr[8] = {8, 7, 5, 3, 1, -1, 3, 5};

    std::cout << "The length of the longest arithmetic subarray is "
        << longestArithSeqLength(arr, 8) << std::endl;

    return 0;
}
