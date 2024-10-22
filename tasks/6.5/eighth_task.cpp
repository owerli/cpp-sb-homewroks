#include <iostream>

int main() {
    int temp;
    int min = 0, max = 64, middle = 0;

    std::cout << "Загадайте число от " << min << " до " << max << ".\n";

    while (middle != (min + max) / 2) {
        middle = (min + max) / 2;

        std::cout << "\nВы загадали число " << middle << "? Введите 0 (нет) / 1 (да): ";
        std::cin >> temp;

        if (temp == 1) break;

        std::cout << "\nВаше число больше чем " << middle << "? Введите 0 (нет) / 1 (да): ";
        std::cin >> temp;

        if (temp == 0) {
            max = middle;
        } else {
            min = middle;
        }
    }

    std::cout << "Ваше число: " << middle;
}