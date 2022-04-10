// limits.cpp -- some interger limits
#include <iostream>
#include <climits>    // 头文件 climits 中包含了关于整型限制的信息

int main()
{
    using namespace std;
    int n_int = INT_MAX;
    // int n2_int = INT_MIN;
    short n_short = SHRT_MAX;    // 初始化
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;    // 在限制文件中定义的符号

    // sizeof 操作符，产生类型或变量的大小
    cout << "int is " << sizeof n_int << " bytes." << endl;    // sizeof() 产生类型/变量的大小（对类型名使用 sizeof 时需用括号括起，而对变量名则不需要）
    cout << "short is " << sizeof n_short << " bytes" << endl;
    cout << "long is " << sizeof n_long << " bytes." << endl;
    cout << "long long is " << sizeof n_llong << " bytes." << endl;
    cout << endl;

    cout << "Maximum values:" << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long: " << n_llong << endl << endl;    // 两个 endl 连用，即换两行（空一行）

    cout << "Minimum int value = " << INT_MIN << endl;
    cout << "Bits pre byte = " << CHAR_BIT << endl;    // char 代表一个字符，占8位
    system("pause");
    return 0;
}