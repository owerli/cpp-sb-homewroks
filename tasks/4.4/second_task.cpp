#include <iostream>

int main() {
    int x;
    int y;
    int result;

    std::cout << "Введите первое число: ";
    std::cin >> x;
    std::cout << "\nВведите второе число: ";
    std::cin >> y;
    std::cout << "\nВведите их сумму: ";
    std::cin >> result;

    std::cout << "-----Проверяем-----\n";

    if (x + y == result) {
        std::cout << "Верно!";
    } else {
        std::cout << "Ошибка! Верный результат: " << x + y;
    }
}