// LAB-4.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Lab_04_4.cpp
// Сушинський Ігор
// Лабораторна робота № 4.4
// Розгалуження, задане графіком функції.
// Варіант 18

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double x, xp, xk, dx, y, R1, R2;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "R1 = "; cin >> R1;
    cout << "R2 = "; cin >> R2;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |"
        << setw(7) << "y" << "  |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        if (x <= -2 * R1)
            y = -R1 * x - 2 * pow(R1, 2);
        else
            if (-1 - 2 * R1 < x && x <= -2 * R1)
                y = -R1 * x - 2 * pow(R1, 2);
            else
                if (-2 * R1 < x && x <= 0)
                    y = sqrt(pow(R1, 2) + pow((x + R1), 2));

                else
                    if (0 < x && x <= 2 * R2)
                        y = -sqrt(pow(R2, 2) + pow((x - R2), 2));

                    else
                        if (2 * R2 < x && x <= 6)
                            y = (2 * R2 - x) / (6 - 2 * R2);
                        else
                            y = -1;

        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << "  |" << endl;

        x += dx;
    }
    cout << "---------------------------" << endl;

    return 0;
}