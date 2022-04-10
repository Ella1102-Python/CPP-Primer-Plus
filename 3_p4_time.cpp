// 编写一个程序，要求用户以整数方式输入秒数，使用 long 或 long long 变量存储。
// 然后以天、小时、分钟和秒的方式显示这段时间，使用符号常量来表示每天有多少小时、每小时有多少分钟以及每分钟有多少秒，该程序的输出应与下面类似：
// Enter the number of seconds: 31600000
// 31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds.

// time.cpp -- conversion between different time units
#include <iostream>

int main()
{
    using namespace std;

    const int ratio_1 = 60;    // 时分秒进率
    const int ratio_2 = 24;    // 一天 24 小时
    unsigned long seconds;

    cout << "Enter the number of seconds: ";
    cin >> seconds;
    int residue = seconds;    // 用来存储剩余秒数
    int days = seconds / (ratio_1 * ratio_1 * ratio_2);
    residue = seconds % (ratio_1 * ratio_1 * ratio_2);    // 剩余秒数
    int hours =  residue / (ratio_1 * ratio_1);
    residue = residue % (ratio_1 * ratio_1);
    int mimutes = residue / ratio_1;
    int seconds_2 = residue % ratio_1;

    cout << seconds << " = ";
    cout << days << " days, ";
    cout << hours << " hours, ";
    cout << mimutes << " mimutes, ";
    cout << seconds_2 << " seconds." << endl;

    system("pause");
    return 0;
}
