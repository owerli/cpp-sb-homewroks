#include <iostream>

int main() {
    int x;

    std::cout << "Введите число для проверки на чётность: ";
    std::cin >> x;

    if (x % 2 == 0) {
        std::cout << "\nЧисло " << x << " — чётное";
    } else {
        std::cout << "\nЧисло " << x << " — нечётное";
    }
}