#include <iostream>

int main() {
    int hour;

    std::cout << "Введите, который час: ";
    std::cin >> hour;
    std::cout << "\n";

    if (hour >= 1 && hour <= 12) {
        while (hour > 0) {
            std::cout << "Ку-ку!\n";
            hour--;
        }
    } else {
        std::cout << "Вы ввели недопустимое время, введите, который час в диапазоне 1-12!";
    }

}