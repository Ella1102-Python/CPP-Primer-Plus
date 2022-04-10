// hex_oct.cpp -- display values in hex and octal
#include <iostream>

int main()
{
    using namespace std;
    int chest = 42;    // decimal interger literal，十进制
    int waist = 42;    // hexadecimal interger literal，十六进制（0x或0X开头，A~F依次代表10~15）
    int inseam = 42;    // octal interger literal，八进制（0开头，第二位必须是1~7否则会报错）

    // 默认格式是十进制，在修改格式之前，原来的格式将一直有效
    cout << "Monsieur cuts a striking figure!\n";
    cout << "chest = " << chest << " (decimal for 42)\n";
    cout << hex;    // 修改格式，改为十六进制
    cout << "waist = " << waist << " (hexadecimal for 42)\n";
    cout << oct;    // 改为八进制
    cout << "inseam = " << inseam << " (octal for 42)\n";
    system("pause");
    return 0;
}