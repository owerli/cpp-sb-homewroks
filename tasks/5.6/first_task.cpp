#include <iostream>

int main() {
    int speed;
    int altitude;

    std::cout << "Введите скорость полета: ";
    std::cin >> speed;
    std::cout << "\nВведите высоту полета: ";
    std::cin >> altitude;

    std::cout << "\n-----Проверяем-----\n";

    if (
        speed >= 750
        && speed <= 850
        && altitude >= 9000
        && altitude <= 9500
    ) {
        std::cout << "Самолет летит правильным эшелоном!";
    } else {
        std::cout << "Самолет летит неправильным эшелоном!";
    }
}