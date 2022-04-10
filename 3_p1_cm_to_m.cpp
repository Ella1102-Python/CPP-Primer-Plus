// 编写一个小程序，要求用户使用一个整数指出自己的身高，单位为厘米，然后将身高转换为米和厘米。
// 该程序使用下划线字符来指示输入位置。
// 另外，使用一个const符号常量来表示转换因子。

// cm_to_m.cpp -- convert cm to m+cm
#include <iostream>

int main()
{
    using namespace std;

    const int CM_TO_M = 100;
    int height;
    
    cout << "Enter your height in cm: ___\b\b\b";
    cin >> height;
    int m = height / CM_TO_M;
    int cm = height % CM_TO_M;
    cout << height << " is " << m << " m and " << cm << "cm" << endl;

    system("pause");
    return 0;
}