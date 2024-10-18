#include <iostream>

int main() {
    int day;

    std::cout << "Введите номер дня в мае: ";
    std::cin >> day;

    std::cout << "\n-----Проверяем-----\n";

    if (day < 1 || day > 31) {
        std::cout << "Вы ввели неверный порядковый номер дня. В мае всего 31 день!";
    } else if (
        day % 6 == 0
        || day % 7 == 0
        || day <= 5
        || day >= 8 && day <= 10
    ) {
        std::cout << "Это выходной или праздничный день!";
    } else {
        std::cout << "Это рабочий день!";
    }
}