// month.cpp -- how many months your age include?
#include <iostream>

int main()
{
    using namespace std;
    double age;
    cout << "How old are you? ";
    cin >> age;
    double months = age * 12;
    cout << "Your age include " << months << " months." << endl;
    system("pause");
    return 0;
}