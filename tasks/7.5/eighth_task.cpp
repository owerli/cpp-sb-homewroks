#include <iostream>

int main() {
    int height, length;

    std::cout << "Введите высоту елочки: ";
    std::cin >> height;

    length = height * 2 - 1;

    for (int y = 1; y <= height; y++) {

        for (int x = 0; x < length; x++) {

            int level = y - 1;
            if (x >= length / 2 - level && x <= length / 2 + level) {
                std::cout << '*';
            } else {
                std::cout << ' ';
            }

        }

        std::cout << '\n';
    }
}