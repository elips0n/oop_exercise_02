#include <iostream>
#include "Long.h"

int main() {
    Long a, b, c;

    printf("Введите первое число: ");
    std::cin >> a;

    printf("Введите второе число: ");
    std::cin >> b;

    printf("\n");

    printf("Первое число: ");
    std::cout << a << std::endl;

    printf("Второе число: ");
    std::cout << b << std::endl;

    std::cout << "Сумма чисел: ";
    std::cout << a + b << std::endl;

    std::cout << "Модуль разности чисел: ";
    std::cout << a - b << std::endl;

    std::cout << "Произведение чисел: ";
    std::cout << a * b << std::endl;

    std::cout << "Частное чисел: ";
    std::cout << a / b << std::endl;

    std::cout << "Сравнение чисел: ";
    if (a == b) std::cout << "Числа равны." << std::endl;
    if (a >> b) std::cout << "Первое число больше второго." << std::endl;
    if (a << b) std::cout << "Первое число меньше второго." << std::endl;

    std::cout << "Третье число: \n";
    c = "56, 8"_l;
    std::cout << c << std::endl;

}