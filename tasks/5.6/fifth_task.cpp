#include <iostream>

int main() {
    int a, b, c, m, n, k;

    std::cout << "Введите длину первой коробки: ";
    std::cin >> a;
    std::cout << "\nВведите ширину первой коробки: ";
    std::cin >> b;
    std::cout << "\nВведите глубину первой коробки: ";
    std::cin >> c;

    std::cout << "\nВведите длину второй коробки: ";
    std::cin >> m;
    std::cout << "\nВведите ширину второй коробки: ";
    std::cin >> n;
    std::cout << "\nВведите глубину второй коробки: ";
    std::cin >> k;

    std::cout << "\n-----Проверяем-----\n";

    if (a < 1 || b < 1 || c < 1 || m < 1 || n < 1 || k < 1) {
        std::cout << "Все параметры коробки должны быть больше 0!";
    } else {
        if (a > b) std::swap(a, b);
        if (a > c) std::swap(a, c);
        if (b > c) std::swap(b, c);

        if (m > n) std::swap(m, n);
        if (m > k) std::swap(m, k);
        if (n > k) std::swap(n, k);

        if (a < m && b < n && c < k) {
            std::cout << "Первую коробку можно поместить во вторую!";
        } else {
            std::cout << "Первую коробку нельзя поместить во вторую!";
        }
    }
}