#include <iostream>

int main() {
  int temp;
  int min = 0, max = 64, middle = 0;

  std::cout << "Загадайте число от " << min << " до " << max << ".\n";

  while (middle != (min + max) / 2) {
    middle = (min + max) / 2;

    std::cout << "\nNumber " << middle << "? 0 (no) / 1 (yes): ";
    std::cin >> temp;

    if (temp == 1) break;

    std::cout << "\nGreater than " << middle << "? 0 (no) / 1 (yes): ";
    std::cin >> temp;

    if (temp == 0) {
      max = middle;
    } else {
      min = middle;
    }
  }

  std::cout << "Win: " << middle;
}