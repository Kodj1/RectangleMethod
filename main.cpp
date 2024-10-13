#include <iostream>
#include <iomanip>
#include "function.h"
#include "integration_methods.h"
#include "input_validation.h"

using namespace std;

int main() {
    char restart;
    do {
        int functionChoice = getFunctionChoice();
        double a = getValidatedInput("Введите нижний предел интегрирования a: ");
        double b = getValidatedInput("Введите верхний предел интегрирования b: ");

        while (b <= a) {
            cout << "Верхний предел должен быть больше нижнего. Попробуйте снова.\n";
            a = getValidatedInput("Введите нижний предел интегрирования a: ");
            b = getValidatedInput("Введите верхний предел интегрирования b: ");
        }

        int n = getValidatedInput("Введите количество отрезков разбиения n: ");

        int methodChoice = getMethodChoice();

        double result = 0.0;
        switch (methodChoice) {
            case 1: result = leftRectangleMethod(a, b, n, functionChoice); break;
            case 2: result = rightRectangleMethod(a, b, n, functionChoice); break;
            case 3: result = midRectangleMethod(a, b, n, functionChoice); break;
            default: cout << "Неверный выбор метода."; return 1;
        }

        cout << "Результат вычисления интеграла: " << fixed << setprecision(6) << result << endl;

        cout << "Хотите начать заново? (y/n): ";
        cin >> restart;
    } while (restart == 'y' || restart == 'Y');

    return 0;
}
