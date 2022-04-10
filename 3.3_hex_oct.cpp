// hex_oct.cpp -- shows hex and octal literals
#include <iostream>

int main()
{
    using namespace std;
    int chest = 42;    // decimal interger literal，十进制
    int waist = 0x42;    // hexadecimal interger literal，十六进制（0x或0X开头，A~F依次代表10~15）
    int inseam = 042;    // octal interger literal，八进制（0开头，第二位必须是1~7否则会报错）

    cout << "Monsieur cuts a striking figure!\n";
    cout << "chest = " << chest << " (42 in decimal)\n";
    cout << "waist = " << waist << " (0x42 in hex)\n";
    cout << "inseam = " << inseam << " (042 in octal)\n";
    system("pause");
    return 0;
}