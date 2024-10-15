#include <iostream>

int main() {
    int income;
    int tax;

    std::cout << "Введите свой доход: ";
    std::cin >> income;

    std::cout << "\n-----Проверяем-----\n";

    if (income <= 0) {
        std::cout << "Доход не может быть меньше или равен нулю!";
    } else {
        if (income >= 50000) {
          tax = (30 * (income - 50000) + 20 * (50000 - 10000) + 13 * 10000)  / 100;
        } else if (income >= 10000) {
            tax = (20 * (income - 10000) + 13 * 10000) / 100;
        } else {
            tax = 13 * income / 100;
        }

        std::cout << "Налог рассчитан: " << tax << " рублей!";
    }
}