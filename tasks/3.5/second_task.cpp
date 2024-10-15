#include <iostream>

int main() {
    int a = 42;
    int b = 153;

    std::cout << "a: " << a << "\n";
    std::cout << "b: " << b << "\n";

    a += b;
    b = a - b;
    a -= b;

    std::cout << "a: " << a << "\n";
    std::cout << "b: " << b << "\n";

    return 0;
}
