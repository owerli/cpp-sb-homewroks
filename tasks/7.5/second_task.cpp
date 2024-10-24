#include <iostream>

int main() {
  int water;
  int milk;
  int americanoWaterLosses = 300, latteWaterLosses = 30, latteMilkLosses = 270;
  int americanoCount = 0, latteCount = 0;
  int choise;

  std::cout << "Введите количество воды в мл: ";
  std::cin >> water;
  std::cout << "\nВведите количество молока в мл: ";
  std::cin >> milk;

  if (water < 0 || milk < 0) {
    std::cout << "Количество воды или молока не могут быть отрицательными!";
    return 1;
  }

  while (water >= americanoWaterLosses || water >= latteWaterLosses && milk >= latteMilkLosses) {

    std::cout << "\nВыберите напиток (1 — американо, 2 — латте): ";
    std::cin >> choise;

    if (choise == 1 && water >= americanoWaterLosses) {
      water -= americanoWaterLosses;
      americanoCount++;
      std::cout << "\nВаш напиток готов.";
    } else if (choise == 1) {
      std::cout << "\nНедостаточно воды.";
    } else if (choise == 2 && water >= latteWaterLosses && milk >= latteMilkLosses) {
      water -= latteWaterLosses;
      milk -= latteMilkLosses;
      latteCount++;
      std::cout << "\nВаш напиток готов.";
    } else if (choise == 2) {
      if (water < latteWaterLosses && milk < latteMilkLosses) {
        std::cout << "\nНедостаточно воды и молока.";
      } else if (water < latteWaterLosses) {
        std::cout << "\nНедостаточно воды.";
      } else {
        std::cout << "\nНедостаточно молока.";
      }
    } else {
      std::cout << "\nНедопустимый выбор";
    }

  };

  std::cout << "\n***Отчёт***\n";
  std::cout
      << "Ингредиентов осталось:"
      << "\n\tВода: " << water << " мл."
      << "\n\tМолоко: " << milk << " мл."
      << "\nКружек американо приготовлено: " << americanoCount
      << "\nКружек латте приготовлено: " << latteCount;
}