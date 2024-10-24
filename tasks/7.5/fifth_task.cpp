#include <iostream>

int main() {
    int width = 24, height = 10;
    int xCenter = width / 2, yCenter = height / 2;

    if (width % 2 == 1) {
        xCenter = width / 2 + 1;
    }

    if (height % 2 == 1) {
        yCenter = height / 2 + 1;
    }

    for (int y = 0; y <= height; y++) {

        std::cout << '\n';

        for (int x = 0; x <= width; x++) {

            if (x == xCenter && y == 0) {
                std::cout << '^';
            } else if (x == xCenter && y == yCenter) {
                std::cout << '+';
            } else if (x == width && y == yCenter) {
                std::cout << '>';
            } else if (x == xCenter) {
                std::cout << '|';
            } else if (y == yCenter) {
                std::cout << '-';
            } else {
                std::cout << ' ';
            }
        }

    }
}