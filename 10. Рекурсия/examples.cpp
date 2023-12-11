#include <iostream>


int factorial(int n) {
   if (n <= 1) {
      return 1;
   } else {
      return n * factorial(n - 1);
   }
}

int sum(int arr[], size_t n) {
   if (n == 0) {
      return 0;
   } else {
      return sum(arr, n - 1) + arr[n-1];
   }
}


// Опашкова рекурсия
int factorial_helper(int n, int res) {
   if (n <= 1) {
      return res;
   } else {
      return factorial_helper(n - 1, n * res);
   }
}

int factorial_tailrec(int n) {
   return factorial_helper(n, 1);
}

int sum_helper(int arr[], size_t len, int acc) {
   if (len == 0) {
      return acc;
   } else {
      return sum_helper(&arr[1], len - 1, acc + arr[0]);
   }
}

int sum_tailrec(int arr[], size_t len) {
   return sum_helper(arr, len, 0);
}


int main() {
	int n;
	std::cin >> n;
	std::cout << factorial(n) << std::endl;
	std::cout << factorial_tailrec(n) << std::endl;

	int xs[] = {1, 2, 3, 4};
	std::cout << sum(xs, 4) << std::endl;
	std::cout << sum_tailrec(xs, 4) << std::endl;

	return 0;
}
