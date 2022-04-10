// floatnum.cpp -- floating-point types
#include <iostream>

int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);    // 改变输出形式
    float tub = 10.0 / 3.0;    // 精确到小数点后六位
    double mint = 10.0 / 3.0;    // 精确到小数点后15位
    const float million = 1.0e6;    // 定义常量

    cout << "tub = " << tub;
    cout << ", a million tubs = " << million * tub;
    cout << ", \nand ten million tubs = " << 10 * million * tub << endl;

    cout << "mint = " << mint << " and a millions mint = " << million * mint;
    cout << ", \nand ten million mints = " << 10 * million * mint << endl;

    system("pause");
    return 0;
}