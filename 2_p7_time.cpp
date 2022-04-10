// time.cpp -- what time is it now?
#include <iostream>

using namespace std;
void now_time(int, int);    // 括号内表明该函数接收两个参数，参数之间用逗号分开

int main()
{
    int h;
    cout << "Enter the number of hours: ";
    cin >> h;
    int m;
    cout << "Enter the number of minutes: ";
    cin >> m;
    now_time(h, m);    // 向函数传递两个参数
    system("pause");
    return 0;
}

void now_time(int hours, int minutes)     // 分别命名
{
    cout << "Time: " << hours << ":" << minutes << endl;
}