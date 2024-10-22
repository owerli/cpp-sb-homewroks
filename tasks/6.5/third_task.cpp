#include <iostream>

int main() {
    int debt;
    int payment;
    std::string name;

    std::cout << "Как вас зовут? ";
    std::cin >> name;
    std::cout << "\nСколько денег вы должны? ";
    std::cin >> debt;

    if (debt <= 0) {
        std::cout << "\nВы ничего нам не должны!";
    }

    while (debt > 0) {
        std::cout << "\n" << name << ", cколько вы хотите заплатить? ";
        std::cin >> payment;

        debt -= payment;

        if (debt > 0) std::cout << "\n" << name <<", вы не погасили долг целиком! Еще осталось: " << debt << ".";
        else if (debt == 0) std::cout << "\n" << name << ", вы погасили долг целиком!";
        else std::cout << "\n" << name << ", вы погасили долг с излишком! На вашем балансе: " << debt * -1 << ".";
    }
}