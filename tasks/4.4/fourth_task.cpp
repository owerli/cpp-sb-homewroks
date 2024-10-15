#include <iostream>

int main() {
    int experience;
    int currentLevel = 1;

    std::cout << "Введите число очков опыта: ";
    std::cin >> experience;

    std::cout << "\n-----Считаем-----\n";

    if (experience >= 5000) {
        currentLevel = 4;
    } else if (experience >= 2500) {
        currentLevel = 3;
    } else if (experience >= 1000) {
        currentLevel = 2;
    }

    if (experience < 0) {
        std::cout << "Количество опыта не может быть меньше нуля!";
    } else {
        std::cout << "Ваш уровень: " << currentLevel;
    }
}