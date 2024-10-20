#include <iostream>
#include <cmath> // Подключение библиотеки математических функций
#include <locale> // Для установки локали

using namespace std;

int main() {
    // Установка русской локали для вывода
    setlocale(LC_ALL, "Russian");

    // Integer27.: Определение дня недели для K-го дня года
    cout << "Задача 1." << endl;
    int K; // Объявление переменной для K-го дня
    cout << "Введите номер дня K (1-365): ";
    cin >> K;
    int day_of_week = (K + 5) % 7 + 1; // Вычисление номера дня недели
    cout << "Номер дня недели для K-го дня: " << day_of_week << endl;

    // Boolean33.: Проверка существования треугольника со сторонами a, b, c
    cout << "\nЗадача 2." << endl;
    int a, b, c; // Объявление переменных для сторон треугольника
    cout << "Введите длины сторон a, b, c: ";
    cin >> a >> b >> c;
    bool is_triangle = (a + b > c) && (a + c > b) && (b + c > a);
    cout << "Существует ли треугольник: " << boolalpha << is_triangle << endl;

    // Math36: Вычисление математического выражения
    cout << "\nЗадача 3." << endl;
    const double pi = 3.141592; // Константа для числа π
    double x, y, num, denom; // Объявление вещественных переменных
    cout << "Введите значение x: ";
    cin >> x;

    // Вычисление числителя выражения
    num = cbrt(pow(x, 2) - 2 * fabs(sin(pow(x, 3))) * fabs(tan(x)) * pow(2, pow(5, cos(x))));

    // Вычисление знаменателя выражения
    denom = 0.625 * x + 2 * log2(pow(x, 3) + 7.5);

    // Вычисление y
    y = num / denom;

    // Вывод результата
    cout << "Значение функции y = " << y << endl;

    return 0;
}
