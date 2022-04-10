// arith.cpp -- some C++ arithmetic
#include <iostream>

int main()
{
    using namespace std;
    float a, b;

    cout.setf(ios_base::fixed, ios_base::floatfield);    // fixed 定点输出，用于防止程序使用科学计数法，floatfield 则让程序输出小数点后六位（设置输出格式）
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter another number: ";
    cin >> b;

    cout << "a = " << a << "; b = " << b << endl;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    system("pause");
    return 0;
}