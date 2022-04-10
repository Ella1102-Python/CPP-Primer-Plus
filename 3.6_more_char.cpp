// more_char.cpp -- the char type and the int type contrasted
#include <iostream>

int main()
{
    using namespace std;
    char ch = 'a';    // C++ 对字符使用单引号，ch 实际上是一个整数，即该字符的 ASCLL 编码
    int i = ch;    // int 类型存储的是该字符的 ASCII 编码
    cout << "The ASCLL code for " << ch << " is " << i << endl;    // cout 是一个智能对象，值的类型将引导 cout 选择如何显示值

    cout << "Add one to the character code:" << endl;
    ch = ch + 1;    
    i = ch;
    cout << "The ASCLL code for " << ch << " is " << i << endl;     // cout 会将 char 类型显示为其对应的字符

    // 使用成员函数 cout.put() 函数输出一个字符
    cout << "Displaying char ch using cout.put(ch): ";
    cout.put(ch);
    // cout.put() 输出一个字符常量
    cout.put('!');    // 如单引号内有多个字符，则会报错，并只显示第一个字符
    cout << endl << "Done!" << endl;
    // 转义序列（应像使用常规字符一样使用转义序列，作为字符常量时用单引号括起，放在字符串中则无需单引号）
    char alarm = '\a';    // \a，振铃字符，使终端扬声器振铃
    cout << alarm << "\n";    // \n，换行符，可代替 endl 重起一行
    system("pause");
    return 0;
}