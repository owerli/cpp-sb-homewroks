#include <iostream>

int main() {
    int food;
    int foodPerMonth = 4;

    std::cout << "Всего гречки было на начало подсчёта: ";
    std::cin >> food;
    std::cout << " кг.\n";

    if (food < 0) {
        std::cout << "Количество гречки не может быть отрицательным!";
        return 1;
    }

    if (food < foodPerMonth) {
        std::cout << "\nГречки не хватит даже на месяц!";
        return 0;
    }

    for (int month = 1;; month++) {
        food -= foodPerMonth;

        if (food < 0) {
            std::cout << "\nПосле " << month - 1 << "месяца гречка закончится!";
            break;
        }

        std::cout << "\nПосле " << month << " месяца у вас в запасе останется " << food << " кг гречки!";
    }

}

