// 编写一个程序，要求用户输入驱车里程（英里）和使用汽油量（加仑），然后指出汽油量为一加仑的里程。

// oil.cpp -- figure out how many miles to a gallon of gas
#include <iostream>

int main()
{
    using namespace std;

    float miles, gallons;
    cout << "How many miles have your drove? : ";
    cin >> miles;
    cout << "How many gallons have your car used? : ";
    cin >> gallons;

    float unit_mile = miles / gallons;

    cout << "1 gallon can drive " << unit_mile << " miles.";

    system("pause");
    return 0;

}