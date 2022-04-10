// typecast.cpp -- forcing type changes
#include<iostream>

using namespace std;

int main()
{
    int a, b, c;
    // 先相加再转换
    a = 19.99 + 11.99;
    // 先转换再相加
    b = (int) 19.99 + (int) 11.99;    // c格式
    c = int (19.99) + int (11.99);    // c++格式

    cout << "a = " << a <<endl;
    cout << "b = " << b <<endl;
    cout << "c = " << c <<endl;

    char ch = 'A';
    cout << "\aThe code for " << ch << " is " << int(ch) << endl;
    cout << "Yes,the code is " << static_cast<int>(ch) << endl;    // static_cast<typeName>(value) 比传统强制类型转换更严格
    system("pause");
    return 0;
}