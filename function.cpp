#include "function.h"

double function(double x, int choice) {
    switch (choice) {
        case 1: return sin(x);       // sin(x)
        case 2: return cos(x);       // cos(x)
        case 3: return tan(x);       // tan(x)
        case 4: return 1.0 / tan(x); // cot(x) = 1 / tan(x)
        default: throw std::invalid_argument("Неверный выбор функции.");
    }
}
