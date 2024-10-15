#include <iostream>

int main() {
    int firstSalary;
    int secondSalary;
    int thirdSalary;

    std::cout << "Введите зарплату первого сотрудника: ";
    std::cin >> firstSalary;
    std::cout << " рублей\n";

    std::cout << "Введите зарплату первого сотрудника: ";
    std::cin >> secondSalary;
    std::cout << " рублей\n";

    std::cout << "Введите зарплату первого сотрудника: ";
    std::cin >> thirdSalary;
    std::cout << " рублей\n";

    std::cout << "-----Проверяем-----\n";

    int maxInPair;
    int minInPair;

    if (firstSalary > secondSalary) {
        maxInPair = firstSalary;
        minInPair = secondSalary;
    } else {
        maxInPair = secondSalary;
        minInPair = firstSalary;
    }

    if (thirdSalary > maxInPair) {
      maxInPair = thirdSalary;
    } else if (thirdSalary < minInPair) {
      minInPair = thirdSalary;
    }

    std::cout << "Самая высокая зарплата в отделе: " << maxInPair << " рублей\n";
    std::cout << "Разница между самой высокой и самой низкой зарплатой в отделе: " << maxInPair - minInPair << " рублей\n";
    std::cout << "Средняя зарплата в отделе: " << (firstSalary + secondSalary + thirdSalary) / 3 << " рублей\n";
}