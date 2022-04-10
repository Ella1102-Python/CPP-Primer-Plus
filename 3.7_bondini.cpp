// bondini.cpp -- using escape sequences
#include <iostream>

int main()
{
    using namespace std;
    cout << "\aOperation \"HyperHype\" is now activated!\n";
    cout << "Enter you agent code: __________\b\b\b\b\b\b\b\b\b\b";    // 让光标退到第一个下划线处
    unsigned long long code;
    cin >> code;
    cout << "\aYou enterd " << code << "...\n";
    cout << "\aCode verified! Proceed with Plan z3!\n";
    + 
    system("pause");
    return 0;
}