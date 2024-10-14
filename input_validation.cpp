#include "input_validation.h"
#include <iostream>
#include <limits>

using namespace std;

// Проверка на корректный ввод числового значения (для вещественных чисел)
double getValidatedInput(const string& prompt) {
    double value;
    while (true) {
        cout << prompt;
        cin >> value;

        if (cin.fail()) {
            cout << "Ошибка ввода. Пожалуйста, введите корректное число.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            return value;
        }
    }
}

// Проверка на корректный ввод целого числа n (для количества отрезков разбиения)
int getValidatedSegments(const string& prompt) {
    int n;
    while (true) {
        cout << prompt;
        cin >> n;

        // Проверка на ошибки ввода или некорректное значение
        if (cin.fail() || n <= 0 || n >= 1000) {
            cout << "Ошибка ввода. Пожалуйста, введите положительное целое число для n.\n";
            cin.clear(); // Очистка флага ошибки
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Пропуск некорректного ввода
        } else {
            return n; // Корректное значение возвращается
        }
    }
}


// Проверка на корректный выбор функции
int getFunctionChoice() {
    int choice;
    while (true) {
        cout << "Выберите функцию для интегрирования:\n";
        cout << "1. sin(x)\n";
        cout << "2. cos(x)\n";
        cout << "3. tan(x)\n";
        cout << "4. cot(x)\n";
        cout << "Ваш выбор: ";
        cin >> choice;

        if (cin.fail() || choice < 1 || choice > 4) {
            cout << "Ошибка ввода. Пожалуйста, выберите корректное значение (1-4).\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            return choice;
        }
    }
}

// Выбор метода вычисления интеграла
int getMethodChoice() {
    int method;
    while (true) {
        cout << "Выберите метод вычисления интеграла:\n";
        cout << "1. Метод левых прямоугольников\n";
        cout << "2. Метод правых прямоугольников\n";
        cout << "3. Метод средних прямоугольников\n";
        cout << "Ваш выбор: ";
        cin >> method;

        if (cin.fail() || method < 1 || method > 3) {
            cout << "Ошибка ввода. Пожалуйста, выберите корректное значение (1-3).\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            return method;
        }
    }
}
