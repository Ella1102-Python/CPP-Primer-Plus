// convert.cpp -- converts pounds to kilograms 
#include <iostream>

double lbtokg(double);    // 函数原型

int main()
{
    using namespace std;
    double lb;
    cout << "Enter your weight in pounds: ";
    cin >> lb;    // 通过用户输入来给变量赋值
    double kilogram = lbtokg(lb);    // 调用函数，lb 将作为参数被传递给 lbtokg 函数
    cout << lb << " pounds = " << kilogram << " kilograms." << endl;
    
    system("pause");
    return 0;
}

double lbtokg(double ltk)
{
    // return 2.2 / ltk; 
    double kg = ltk / 2.2;
    return kg;    // 将结果返回给 main
}