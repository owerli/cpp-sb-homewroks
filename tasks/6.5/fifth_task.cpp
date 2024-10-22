#include <iostream>

int main() {
    int number;

    std::cout << "Введите номер требуемого числа фибоначи: ";
    std::cin >> number;

    std::cout << "\n-----Вычисляем-----\n";

    if (number <= 0 || number >= 47) {
        std::cout << "Номер числа Фибоначчи должен быть больше 0 и меньше 47!";
    }
    else if (number == 1 || number == 2) {
        std::cout << "Ваше число Фибоначчи: 1.";
    } else {
      int prev = 1, curr = 1;

      number -= 2;
      while (number > 0) {
        curr += prev;
        prev = curr - prev;
      }

      std::cout << "Ваше число Фибоначчи: " << curr << ".";
    }
}