// divide.cpp -- interger and floating-point division
#include <iostream>

int main(){
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "Interger division: 9/5 = " << 9/5 << endl;    // 整数除法
    cout << "Floating-point division 9.0/5.0 = " << 9.0/5.0 << endl;    // 小数除法
    cout << "Mixed division: 9.0/5 = " << 9/5.0 << endl;
    cout << "Double constants : 1e7/9.0 = " << 1.e7/9.0 << endl;    // double 类型除法（浮点常量默认为 double!!!）
    cout << "Float constants : 1e7f/9.0f = " << 1.e7f/9.0f << endl;    // f 后缀将常量转换为 float 类型
    system("pause");
    return(0);
}