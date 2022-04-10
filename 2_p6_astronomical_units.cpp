// astronomical_units.cpp -- converts light years to astronomical units
#include <iostream>

double au_to_ly(double);

int main()
{
    using namespace std;
    double ly; 
    cout << "Enter the number of light years: ";
    cin >> ly;
    double au = au_to_ly(ly);
    cout << ly << " light years = " << au << " astronomical units." << endl;
    system("pause");
    return 0;
}

double au_to_ly(double light_years)
{
    return 63240 * light_years;
}