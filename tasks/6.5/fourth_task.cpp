#include <iostream>

int main() {
    int digits, startDigits, endDigits;
    int startSum = 0,
        endSum = 0;

    std::cout << "Введите номер билета: ";
    std::cin >> digits;

    if (digits / 1000000 == 0) {
        std::cout << "Номер билетика не может содержать менее шести цифр!";
        return 1;
    }

    std::cout << "\n-----Проверяем-----\n";

    endDigits = digits % 1000;

    while (digits / 1000 > 0) {
        digits /= 10;
    }
    startDigits = digits;

    while (startDigits > 0 && endDigits > 0) {
        startSum += startDigits % 10;
        endSum += endDigits % 10;
        startDigits /= 10;
        endDigits /= 10;
    }

    if (startSum == endSum) {
        std::cout << "Билетик счастливый!";
    } else {
        std::cout << "Билетик обыкновенный!";
    }
}