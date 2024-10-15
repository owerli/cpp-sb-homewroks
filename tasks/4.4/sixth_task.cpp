#include <iostream>

int main() {
  int clientsCount;
  int barbersCount;
  int clientsPerBarber = 8;
  int workingDays = 30;

  std::cout << "Введите число клиентов: ";
  std::cin >> clientsCount;
  std::cout << "\nВведите число барберов: ";
  std::cin >> barbersCount;

  std::cout << "\n-----Проверяем-----\n";

  if (clientsCount < 0 || barbersCount < 0) {
    std::cout << "Количество клиентов или барберов не может быть меньше нуля!\n";
  }

  int maxBarberCapacity = clientsPerBarber * workingDays;
  int maxBarbersCapacity = maxBarberCapacity * barbersCount;

  int barbersDelta;
  int barbersExcessOrLack;
  if (maxBarbersCapacity < clientsCount) {

    barbersDelta = clientsCount - maxBarbersCapacity;
    if (barbersDelta % maxBarberCapacity == 0) {
      barbersExcessOrLack = barbersDelta / maxBarberCapacity;
    } else {
      barbersExcessOrLack = barbersDelta / maxBarberCapacity + 1;
    }

    std::cout << "Не хватает " << barbersExcessOrLack << " барберов!\n";

  } else {

    barbersDelta = maxBarbersCapacity - clientsCount;

    if (barbersDelta == 0 || barbersDelta < maxBarberCapacity) {
      std::cout << "Барберов необходимое количество!\n";
    } else {
      barbersExcessOrLack = barbersDelta / maxBarberCapacity;
      std::cout << "В избытке на " << barbersExcessOrLack << " барберов!\n";
    }

  }
}