// carrots.cpp -- uses and displays a variable
#include <iostream>

int main()
{
    using namespace std;

    int carrots;    // 声明一个整型变量

    carrots = 25;    // 给变量赋值，不赋值则默认为0  
    cout << "I have ";
    cout << carrots;    // 显示变量的值
    cout << " carrots.";
    cout << endl;
    carrots = carrots - 1;    // 修改变量的值，将其减1
    cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;
    system("pause");
    return 0;   
}