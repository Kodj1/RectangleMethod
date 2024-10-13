#include "integration_methods.h"
#include "function.h"

using namespace std;

// Метод левых прямоугольников с выводом таблицы
double leftRectangleMethod(double a, double b, int n, int choice) {
    double step = (b - a) / n;
    double integral = 0.0;

    cout << "╔═══════╦═════════════════╦═════════════════╦═════════════════╗" << endl;
    cout << "║   i   ║    x_left       ║    f(x_left)    ║      Area       ║" << endl;
    cout << "╠═══════╬═════════════════╬═════════════════╬═════════════════╣" << endl;

    for (int i = 0; i < n; ++i) {
        double x_left = a + i * step;
        double fx = function(x_left, choice);
        double area = fx * step;
        integral += area;

        cout << "║" << setw(5) << i << "  ║"
             << setw(15) << fixed << setprecision(6) << x_left << "  ║"
             << setw(15) << fixed << setprecision(6) << fx << "  ║"
             << setw(15) << fixed << setprecision(6) << area << "  ║" << endl;

        if (i < n - 1) {
            cout << "╠───────┼─────────────────┼─────────────────┼─────────────────╣" << endl;
        }
    }

    cout << "╚═══════╩═════════════════╩═════════════════╩═════════════════╝" << endl;

    return integral;
}

// Метод правых прямоугольников с выводом таблицы
double rightRectangleMethod(double a, double b, int n, int choice) {
    double step = (b - a) / n;
    double integral = 0.0;

    cout << "╔═══════╦═════════════════╦═════════════════╦═════════════════╗" << endl;
    cout << "║   i   ║    x_right      ║   f(x_right)    ║      Area       ║" << endl;
    cout << "╠═══════╬═════════════════╬═════════════════╬═════════════════╣" << endl;

    for (int i = 1; i <= n; ++i) {
        double x_right = a + i * step;
        double fx = function(x_right, choice);
        double area = fx * step;
        integral += area;

        cout << "║" << setw(5) << i << "  ║"
             << setw(15) << fixed << setprecision(6) << x_right << "  ║"
             << setw(15) << fixed << setprecision(6) << fx << "  ║"
             << setw(15) << fixed << setprecision(6) << area << "  ║" << endl;

        if (i < n) {
            cout << "╠───────┼─────────────────┼─────────────────┼─────────────────╣" << endl;
        }
    }

    cout << "╚═══════╩═════════════════╩═════════════════╩═════════════════╝" << endl;

    return integral;
}

// Метод средних прямоугольников с выводом таблицы
double midRectangleMethod(double a, double b, int n, int choice) {
    double step = (b - a) / n;
    double integral = 0.0;

    cout << "╔═══════╦═════════════════╦═════════════════╦═════════════════╗" << endl;
    cout << "║   i   ║    x_mid        ║    f(x_mid)     ║      Area       ║" << endl;
    cout << "╠═══════╬═════════════════╬═════════════════╬═════════════════╣" << endl;

    for (int i = 0; i < n; ++i) {
        double x_mid = a + (i + 0.5) * step;
        double fx = function(x_mid, choice);
        double area = fx * step;
        integral += area;

        cout << "║" << setw(5) << i << "  ║"
             << setw(15) << fixed << setprecision(6) << x_mid << "  ║"
             << setw(15) << fixed << setprecision(6) << fx << "  ║"
             << setw(15) << fixed << setprecision(6) << area << "  ║" << endl;

        if (i < n - 1) {
            cout << "╠───────┼─────────────────┼─────────────────┼─────────────────╣" << endl;
        }
    }

    cout << "╚═══════╩═════════════════╩═════════════════╩═════════════════╝" << endl;

    return integral;
}
