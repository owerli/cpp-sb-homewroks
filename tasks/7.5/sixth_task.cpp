#include <iostream>

int main() {
  int stringLength, exclaimCount, baseLength;

  std::cout << "Введите общую длину колонтикула: ";
  std::cin >> stringLength;
  std::cout << "\nВведите количесвто восклицательных знаков: ";
  std::cin >> exclaimCount;

  if (stringLength < 0 || exclaimCount < 0) {
    std::cout << "Длина колонтикула или количество восклицательных знаков не могут быть отрицательными!";
    return 1;
  }

  if (stringLength < exclaimCount) {
    exclaimCount = stringLength;
  }

  baseLength = stringLength - exclaimCount;

  for (int pos = 0; pos < stringLength; pos++) {

    if (pos >= baseLength / 2 && pos < baseLength / 2 + exclaimCount) {
      std::cout << "!";
    } else {
      std::cout << "~";
    }

  }
}