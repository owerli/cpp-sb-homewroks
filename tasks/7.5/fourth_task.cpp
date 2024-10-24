#include <iostream>

int main() {
    int width, height;

    std::cout << "Введите ширину: ";
    std::cin >> width;
    std::cout << "\nВведите высоту: ";
    std::cin >> height;

    if (width < 0 || height < 0) {
        std::cout << "Ширина или высота не могут быть отрицательными!";
        return 1;
    }

    for (int y = 1; y <= height; y++) {

        std::cout << '\n';

        for (int x = 1; x <= width; x++) {

            if (x == 1 || x == width) {
                std::cout << '|';
            }
            else if (y == 1 || y == height ) {
                std::cout << '-';
            } else {
                std::cout << ' ';
            }
        }

    }
}