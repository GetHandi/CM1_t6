// 4 вариант;
// Решение нелинейных уравнений методом половинного деления;

#include <iostream>
#include <cmath>

using namespace std;

double fxa(double x)
{
    return x + pow(2, x) + 5;
}

double fxb(double x)
{
    return 3 * pow(x, 3) + pow(x, 2) + 2 * x + 3;
}


double a = -6.0; // крайнее левое значение промежутка  (a: -6;-4; b: -1;0)
double b = -4.0; // крайнее правое значение промежутка;
//double a = -1.0; // крайнее левое значение промежутка  (a: -6;-4; b: -1;0)
//double b = -0.0; // крайнее правое значение промежутка;
double c = 0.0; // ответ;
const double eps = 0.000001; // отклонение; 

int main()
{
    cout << "x + 2^x + 5 = 0" << endl << endl;
    int n = 0; // счетчик;
    cout << "Iteration #" << n << ":\t" << "a = " << a << ",\t" << "b = " << b << "\t" << "answer - " << c << "\n";
    while (b - a >= 2 * eps) {
        c = (a + b) / 2;
        if (fxa(c) == 0)
            return c;
        else if (fxa(a) * fxa(c) < 0)
            b = c;
        else if (fxa(b) * fxa(c) < 0)
            a = c;
        n++;
        cout << "Iteration #" << n << ":\t" << "a = " << a << ",\t" << "b = " << b << "\t" << "answer - " << c << "\n";
    }
    return (a + b) / 2;

    /*cout << "3x^3 + x^2 + 2x + 3 = 0" << endl << endl;
    int n = 0; // счетчик;
    cout << "Iteration #" << n << ":\t" << "a = " << a << ",\t" << "b = " << b << "\t" << "answer - " << c << "\n";
    while (b - a >= 2 * eps) {
        c = (a + b) / 2;
        if (fxb(c) == 0)
            return c;
        else if (fxb(a) * fxb(c) < 0)
            b = c;
        else if (fxb(b) * fxb(c) < 0)
            a = c;
        n++;
        cout << "Iteration #" << n << ":\t" << "a = " << a << ",\t" << "b = " << b << "\t" << "answer - " << c << "\n";
    }
    return (a + b) / 2;
    */
}
