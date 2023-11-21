#include <iostream>

int a[10];

int main() {
    int b[100];
    int *c = new int[1000];

    std::cout << ' ' << a << ' ' << b << ' ' << c << std::endl;
    std::cout << ' ' << a[0] << ' ' << b[0] << ' ' << c[0] << std::endl;

    delete[] c;
    return 0;
}
