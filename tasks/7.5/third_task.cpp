#include <iostream>

int main() {

  int x = 7, y = 10;
  int mX = 15, mY = 20;
  std::string command = "/s";

  while (command != "/q") {

    std::cout << "\n[Программа]: Марсоход находится на позиции " << x << ", " << y << ", введите команду: ";
    std::cin >> command;

    if (command == "w" && y > 1) {
      y--;
    } else if (command == "a" && x > 1) {
      x--;
    } else if (command == "s" && y < mX) {
      y++;
    } else if (command == "d" && x < mY) {
      x++;
    } else if (
        command == "w"
        || command == "a"
        || command == "s"
        || command == "d"
    ) {
      std::cout << "Вы уперлись в стену!";
    } else {
      std::cout << "Команда не распознана! Используйте клавиши w, a, s, d для управления роботом.\n";
    }

  }
}