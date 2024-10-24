#include <iostream>

int main() {
    int antibioticDose, bacteriaCount;
    int diedPerDoseMax = 10;

    std::cout << "Введите количество бактерий: ";
    std::cin >> bacteriaCount;
    std::cout << "\n Введите количество антибиотика: ";
    std::cin >> antibioticDose;

    if (bacteriaCount < 0 || antibioticDose < 0) {
        std::cout << "Количество бактерий или капель антибиотика не могут быть отрицательными!";
        return 1;
    }

    for (int currentHour = 0; diedPerDoseMax - currentHour > 0 && bacteriaCount > 0; currentHour++) {
        bacteriaCount *= 2;
        bacteriaCount -= antibioticDose * (diedPerDoseMax - currentHour);

        std::cout << "\nПосле " << currentHour + 1 << " часа бактерий осталось " << bacteriaCount;
    }

    if (bacteriaCount == 0) {
        std::cout << "Человечество спасено!";
    } else {
        std::cout << "Бактерии победили!";
    }

}