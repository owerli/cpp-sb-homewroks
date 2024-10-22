#include <iostream>

int main() {
    int number;
    int digitsCount = 0;

    std::cout << "Введите число: ";
    std::cin >> number;

    do {
        number = number / 10;
        digitsCount++;
    } while (number != 0);

    std::cout << "\nЦифр в числе: " << digitsCount;
}