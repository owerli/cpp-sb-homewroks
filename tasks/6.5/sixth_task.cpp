#include <iostream>

int main() {
  int deposit, point, wanted;
  int year = 0;

  std::cout << "Введите размер вклада: ";
  std::cin >> deposit;
  std::cout << "\nВведите процентную ставку: ";
  std::cin >> point;
  std::cout << "\nВведите желаемую сумму: ";
  std::cin >> wanted;

  if (deposit <= 0 || point <= 0 || wanted <= 0) {
    std::cout << "Текущая сумма вклада, процентная ставка или желаемая сумма не может быть равна или меньше нуля!";
  }

  std::cout << "\n-----Проверяем-----\n";

  while (deposit < wanted) {
    deposit += deposit * point / 100;
    year++;
  }

  if (year == 0) {
    std::cout << "Текущая сумма вклада превышаета или равна желаемой сумме накопления!";
  } else {
    std::cout << "Чтобы накопить " << wanted << " потребутеся " << year << " лет.";
  }
}