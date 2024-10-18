#include <iostream>

int main() {
  int birthYear, birthMonth, birthDay;
  int year, month, day;

  std::cout << "Введите год рождения: ";
  std::cin >> birthYear;
  std::cout << "\nВведите месяц рождения: ";
  std::cin >> birthMonth;
  std::cout << "\nВведите день рождения: ";
  std::cin >> birthDay;

  std::cout << "\nВведите сегодняшний год: ";
  std::cin >> year;
  std::cout << "\nВведите сегодняшний месяц: ";
  std::cin >> month  ;
  std::cout << "\nВведите сегодняшний день: ";
  std::cin >> day;

  std::cout << "\n-----Проверяем-----\n";

  if (birthYear > year
    || birthYear == year && birthMonth > month
    || birthYear == year && birthMonth == month && birthDay > day
  ) {
    std::cout << "Дата рождения не может быть позже сегодняшней даты!";
  } else if (
      year - birthYear > 18
      || year - birthYear == 18 && month > birthMonth
      || year - birthYear == 18 && month == birthMonth && day > birthDay
  ) {
    std::cout << "Покупатель совершеннолетний!";
  } else {
    std::cout << "Покупатель несовершеннолетний!";
  }
}