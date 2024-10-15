#include <iostream>

int main() {
    int x;
    int y;

    std::cout << "Введите первое число: ";
    std::cin >> x;
    std::cout << "\nВведите второе число: ";
    std::cin >> y;

    std::cout << "-----Проверяем-----\n";

    if (x < y) {
        std::cout << "Наименьшее число: " << x;
    } else if (x > y) {
        std::cout << "Наименьшее число: " << y;
    } else {
        std::cout << "Числа равны!";
    }
}