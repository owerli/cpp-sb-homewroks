#include <iostream>

int main() {
    int x;
    int y;

    std::cout << "Введите первое число: ";
    std::cin >> x;
    std::cout << "\nВведите второе число: ";
    std::cin >> y;

    std::cout << "\n-----Проверяем-----\n";

    if (y == 0) {
        std::cout << "Деление на ноль невозможно!";
    } else if (x % y == 0) {
        std::cout << "Да, " << x << " делится на " << y << " без остатка!";
    } else {
        std::cout << "Нет, " << x << " не делится на " << y << " без остатка!";
    }
}