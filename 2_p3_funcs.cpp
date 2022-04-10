// funcs.cpp -- using 3 functions
#include <iostream>

using namespace std;    // 将名称空间放在所有函数之前（之外），使得所有函数均可使用该编译指令
void tbm(void);
void shtr(void);    // 没有返回值，不接收任何参数的函数

int main()
{
    tbm();    // 不接收任何信息的函数括号为空
    shtr();
    tbm();    // 不返回任何信息的函数不能使用赋值语句，直接调用即可
    shtr();
    system("pause");
    return 0;
}

void tbm()    // 在 C++ 中空括号与 void 等价
{
    cout << "Three blind mice," << endl;
}

void shtr()
{
    cout << "See how they run." << endl;
}