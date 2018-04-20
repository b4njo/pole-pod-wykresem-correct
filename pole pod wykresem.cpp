#include <iostream>
#include <cmath>

using namespace std;

double f(double x, double n)
{
    return -3*x*x*x+2*x*x-x+n;
}

double a, b, n;

double functionSurface(double startPosition, double precision, double endPosition, double n)
{
    double surfaceValue=0;
    for(double i=(startPosition+precision/2); i<endPosition; i+=precision)
        surfaceValue+=precision*f(i, n);
    return surfaceValue;
}

int main()
{
    cout << "Podaj N: ";
    cin >> n;
    cout << endl;

    cout << "Podaj poczatek przedzialu: ";
    cin >> a;
    cout << endl;

    cout << "Podaj koniec przedzialu: ";
    cin >> b;
    cout << endl;

    double precision=(b-a)/100;

    cout << "Pole pod wykresem: " << abs(functionSurface(a, precision, b, n));
    return 0;
}
