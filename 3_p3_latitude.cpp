// 编写一个程序，要求用户以度、分、秒的方式输入一个纬度，然后以度为单位显示该纬度。
// 1度 = 60分，1分 = 60秒，请以符号常量的方式表示这些值。
// 对于每个输入值，应使用一个独立的变量存储它。

// latitude.cpp -- display latitude in degree
#include <iostream>

int main()
{
    using namespace std;
    
    const float ratio = 60;    // 转换因子（必须设置为 float 否则第 21 行将会丢失精度）
    int degrees, minutes, seconds;
    cout << "Enter a latitude in degrees, mimutes and seconds: " << endl;
    cout << "D: ";    // 度
    cin >> degrees;
    cout << "M: ";    // 分
    cin >> minutes;
    cout << "S: ";    // 秒
    cin >> seconds;
    
    float s_to_d = seconds / (ratio * ratio);    // 把秒转换为度
    float m_to_d = minutes / ratio;    // 把分转换为度
    float latitude = s_to_d + m_to_d + degrees;

    cout << degrees << " degrees ";
    cout << minutes << " minutes ";
    cout << seconds << " seconds = ";
    cout << latitude << " degrees." << endl;

    system("pause");
    return 0;
}