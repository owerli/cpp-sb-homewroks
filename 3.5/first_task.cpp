#include <iostream>

int main() {
    int passengersCount = 0;
    int passengersEnteredCount = 0;
    int passengersExitedCount = 0;
    int passengersTotal = 0;

    std::cout << "Подсчет количества пассажиров в салоне и экономических параметров рейса.\n";

    std::cout << "Прибываем на остановку «Улица программистов». В салоне пассажиров: " << passengersCount << "\n";

    std::cout << "Сколько пассажиров вышло на остановке? ";
    std::cin >> passengersExitedCount;

    std::cout << "\nСколько пассажиров зашло на остановке? ";
    std::cin >> passengersEnteredCount;

    passengersTotal += passengersEnteredCount;
    passengersCount += passengersEnteredCount;
    passengersCount -= passengersExitedCount;
    std::cout << "\n-----------Едем---------";

    std::cout << "\n\nПрибываем на остановку «Улица программистов». В салоне пассажиров: " << passengersCount << "\n";

    std::cout << "Сколько пассажиров вышло на остановке? ";
    std::cin >> passengersExitedCount;

    std::cout << "\nСколько пассажиров зашло на остановке? ";
    std::cin >> passengersEnteredCount;

    passengersTotal += passengersEnteredCount;
    passengersCount += passengersEnteredCount;
    passengersCount -= passengersExitedCount;
    std::cout << "\n-----------Едем---------";

    std::cout << "\n\nПрибываем на остановку «Улица программистов». В салоне пассажиров: " << passengersCount << "\n";

    std::cout << "Сколько пассажиров вышло на остановке? ";
    std::cin >> passengersExitedCount;

    std::cout << "\nСколько пассажиров зашло на остановке? ";
    std::cin >> passengersEnteredCount;

    passengersTotal += passengersEnteredCount;
    passengersCount += passengersEnteredCount;
    passengersCount -= passengersExitedCount;
    std::cout << "\n-----------Едем---------";

    std::cout << "\n\nПрибываем на остановку «Улица программистов». В салоне пассажиров: " << passengersCount << "\n";

    std::cout << "Сколько пассажиров вышло на остановке? ";
    std::cin >> passengersExitedCount;

    std::cout << "\nСколько пассажиров зашло на остановке? ";
    std::cin >> passengersEnteredCount;

    passengersTotal += passengersEnteredCount;
    passengersCount += passengersEnteredCount;
    passengersCount -= passengersExitedCount;
    std::cout << "\n\nПриехали! В салоне пассажиров: " << passengersCount << "\n";

    int income = 20 * passengersCount;
    int salary = income / 4;
    int otherExpenses = income / 5;
    int profit = income - salary - otherExpenses * 3;

    std::cout << "Всего заработали:" << income << "руб.\n";
    std::cout << "Зарплата водителя:" << salary << "руб.\n";
    std::cout << "Расходы на топливо:" << otherExpenses << "руб.\n";
    std::cout << "Налоги:" << otherExpenses << "руб.\n";
    std::cout << "Расходы на ремонт машины:" << otherExpenses << "руб.\n";
    std::cout << "Итого доход:" << profit << "руб.\n";

    return 0;
}
