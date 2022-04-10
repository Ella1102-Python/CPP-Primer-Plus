// degrees.cpp -- converts °C to °F
#include <iostream>

double c_to_f(double);

int main()
{
    using namespace std;
    double c;
    cout << "Degree centigrade: ";
    cin >> c;
    double f = c_to_f(c);
    cout << c << " C = " << f << " F.";
    system("pause");
    return 0;
}

double c_to_f(double degrees)
{
    return degrees * 1.8 + 32;
}