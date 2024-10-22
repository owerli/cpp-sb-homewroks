#include <algorithm>
#include <iostream>

int main() {
    int m, n;

    std::cout << "Введите числитель: ";
    std::cin >> m;
    std::cout << "\nВведите знаменатель: ";
    std::cin >> n;

    if (n == 0) {
      std::cout << "Знаменатель не может быть равен нулю!";
      return 0;
    }

    if (m == 0) {
      std::cout << "\nРезультат: " << 0;
      return 0;
    }

    int a = m, b = n;

    while (a != 0 && b != 0) {
        if (a > b) {
            a = a % b;
        } else {
            b = b % a;
        }
    }
    int div = std::max(a, b);

    std::cout << "\nРезультат: " << m / div << "/" << n / div;
}