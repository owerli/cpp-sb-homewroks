#include <iostream>

int main() {
    std::cout << "Подсчет высоты бамбука к середине третьего дня.\n";

    int initialHeight = 100;
    int dailyGrowth = 50;
    int nightLosses = 20;

    int thirdDayHeight = initialHeight + (dailyGrowth - nightLosses) * 2 + dailyGrowth / 2;

    std::cout << "Высота бамбука на середину третьего дня = " << thirdDayHeight << "\n";

    return 0;
}
