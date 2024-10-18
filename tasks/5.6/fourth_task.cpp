#include <iostream>

int main() {
    int amount;
    int fiveThousandsCount, twoThousandsCount, oneThousandsCount, fiveHundredsCount, twoHundredsCount, oneHundredsCount;

    std::cout << "Введите требуемую сумму: ";
    std::cin >> amount;

    std::cout << "\n-----Считаем-----\n";

    if (amount < 1 || amount > 150000 || amount % 100 != 0) {
        std::cout << "Вы ввели сумму, недопустимую для вывода. Максимальная сумма вывода 150000. Сумма должна быть больше 0 и кратна 100!\n";
    } else {
        fiveThousandsCount = amount / 5000;
        amount %= 5000;

        twoThousandsCount = amount / 2000;
        amount %= 2000;

        oneThousandsCount = amount / 1000;
        amount %= 1000;

        fiveHundredsCount = amount / 500;
        amount %= 500;

        twoHundredsCount = amount / 200;
        amount %= 200;

        oneHundredsCount = amount / 100;
        amount %= 100;

        std::cout << "Будут выданы купюры по:\n"
        << "5000 - " << fiveThousandsCount << "шт.\n"
        << "2000 - " << twoThousandsCount << "шт.\n"
        << "1000 - " << oneThousandsCount << "шт.\n"
        << "500 - " << fiveHundredsCount << "шт.\n"
        << "200 - " << twoHundredsCount << "шт.\n"
        << "100 - " << oneHundredsCount << "шт.\n";
    }
}