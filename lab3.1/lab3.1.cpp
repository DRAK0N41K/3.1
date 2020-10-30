#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x; // вхідний параметр
    double y; // результат обчислення виразу
    double A; // проміжний результат - функціонально стала частина виразу
    double B = 0; // проміжний результат - функціонально змінна частина виразу
    cout << "x = "; cin >> x;

    A = 1 + 9 * x;
    // спосіб 1: розгалуження в скороченій формі
    if (0 >= x)
        B = log(fabs(sin(x))) + pow(x, 7);
    if (0 < x && x <= 3)
        B = 1. / tan(fabs(x + 1) / 2);
    if (x > 3)
        B = 3 * x - pow(x, 5);
    y = A + B;
    cout << endl;
    cout << "1) y = " << y << endl;
    // спосіб 2: розгалуження в повній формі
    if (0 >= x)
        B = log(fabs(sin(x))) + pow(x, 7);
    else
        if (0 < x && x <= 3)
            B = 1. / tan(fabs(x + 1) / 2);
        else
            B = 3 * x - pow(x, 5);
    y = A + B;
    cout << "2) y = " << y << endl;
    cin.get();
    return 0;
}




