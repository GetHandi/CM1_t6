// 4 вариант;
// Решение нелинейных уравнений методом половинного деления;

#include <iostream>

using namespace std;





int main()
{
    int n = 0;
    cout << "Iteration #" << n << ;
    while (b - a >= 2 * eps)
    {

    }




    return 0;
}


n = 0
print(f'Итерация: {n:3d}, a = {a:.5f}, b = {b:.5f}, c = {(a + b) / 2:.5f}')
while b - a >= 2 * eps:
c = (a + b) / 2
if f(c) == 0 :
    return c
    elif f(a) * f(c) < 0 :
    b = c
    elif f(b) * f(c) < 0 :
    a = c
    n += 1
    print(f'Итерация: {n:3d}, a = {a:.5f}, b = {b:.5f}, c = {(a + b) / 2:.5f}')
    return (a + b) / 2