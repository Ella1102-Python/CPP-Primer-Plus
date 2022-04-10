// long.cpp -- converts metres to kilometres
#include <iostream>

int main()
{
    using namespace std;
    double metres;
    cout << "Please enter how many meters you have walked: ";
    cin >> metres;
    double km = metres / 1000;
    cout << metres << " metres =  " << km << " kilometres." << endl;
    system("pause");
    return 0;
}