#include <iostream>


bool hasSubsetSum(int *arr, size_t size, int target) {
	if (target == 0) {
		return true;
	} else if (size == 0) {
		return false;
	} else {
		const int last = arr[size - 1];
		return hasSubsetSum(arr, size - 1, target) ||
			(last <= target && hasSubsetSum(arr, size - 1, target - last));
	}
}


int main() {
	int arr[] = {1, 3, 7, 100};

	std::cout << std::boolalpha;
	std::cout << hasSubsetSum(arr, 4, 101) << std::endl;
	std::cout << hasSubsetSum(arr, 4, 11) << std::endl;
	std::cout << hasSubsetSum(arr, 4, 5) << std::endl;
	return 0;
}
