// exceed.cpp -- exceeding some interger limits
#include <iostream>
#define ZERO 0    // 符号常量，ZERO 即代表0
#include <climits>

int main()
{
    // 如果超越了限制，其值将变为范围另一端的取值
    using namespace std;
    short sam = SHRT_MAX;    // short 类型的最大值（32767）
    unsigned short sue = sam;    // 当 sam 已被定义时，该语句可正确执行

    cout << "Sam has " << sam  << " dollars and Sue has " << sue << " dollars deposites." << endl;
    cout << "Add 1$ to each account." << endl;
    sam = sam + 1;    // 32767 + 1 = -32768
    sue = sue + 1;
    cout << "Now Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited.\nPoor Sam!" << endl;
    sam = sue = ZERO;
    cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposites." << endl;
    cout << "Take 1$ from each account.";
    sam = sam - 1;
    sue = sue - 1;    // 0 - 1 = 65535
    cout << "Sam has " << sam << "dollars and Sue has " << sue << " dollars deposites." << endl;
    cout << "Lucky Sue!" << endl;
    system ("pause");
    return 0;
}
