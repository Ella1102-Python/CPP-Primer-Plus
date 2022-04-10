// chartype.cpp -- the char type
#include <iostream>

int main()
{
    using namespace std;
    char ch;    // 定义一个 char(acter) 类型的变量（可能有符号也可能无符号）
    
    cout << "Enter a character: " << endl;
    cin >> ch;    // 如果输入超过一个字符，则只会取第一个字符
    cout << "Hola! Thank you for the " << ch << " character." << endl;
    system("pause");
    return 0;
}