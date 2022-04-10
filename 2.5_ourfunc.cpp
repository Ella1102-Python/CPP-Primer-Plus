// ourfunc.cpp -- defining your own function
#include <iostream>

// 创建函数的基本格式 —— type funcname(argumentlist)

using namespace std;    // 将该编译指令放在所有函数前，使得所有函数均可访问名称空间

void ella(int);    // 将定义的函数的原型放到 main 之前，void代表无返回值，int代表接受一个整数参数

int main()
{
    // using namespace std;
    ella(1102);    // 调用函数
    cout << "Pick an interger: ";    // 无换行符，输入提示与输入将出现在同一行中
    int count;    // 声明变量 count
    cin >> count;
    ella(count);
    cout << "Done!" << endl;
    
    system("pause");
    return 0;
    
}

void ella(int n)    // n 是一个新的变量，函数调用时传递的值将被赋给它
{
    // using namespace std;
    cout << "Ella says that she touch your toes " << n << " times." << endl;

}