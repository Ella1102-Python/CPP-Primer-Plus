// init.cpp -- type changes on initialization
#include <iostream>

int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float a = 3;    // 整数转换为浮点数
    int b = 3.9832;    // 浮点数转化为整数
    int c = 7.2E12;    // C++ 没有对结果进行定义（在不同编译器中结果不定）

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    system("pause");
    return 0;
}