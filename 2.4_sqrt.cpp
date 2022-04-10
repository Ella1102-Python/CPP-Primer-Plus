// sqrt.cpp -- using the sqrt() function
#include <iostream>
#include <cmath>    // 导入头文件cmath，其中包含 sqrt 函数的原型--函数原型即：type_name func_name(type_name_2);

int main()
{
    using namespace std;

    double num;

    cout << "Please input a number:" << endl;
    cin >> num;
    double root = sqrt(num);    // 编译器编译程序时会自动在库文件中搜索使用的函数
    cout << "The square root of " << num << " is " << root << endl;
    
    system("pause");
    return 0;
}