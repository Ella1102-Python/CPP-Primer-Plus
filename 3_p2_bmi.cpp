// 编写一个小程序，要求以几英尺几英寸的方式输入身高，并以磅为单位输入体重，使用3个变量来存储这些信息。该程序报告其 BMI。
// 为了计算 BMI，该程序先以英寸的方式指出用户的身高，1英尺 = 12英寸，并将以英寸为单位的身高转换为以米为单位的身高，1英寸 = 0.0254米。
// 然后，将以磅为单位的体重转换为以千克为单位的体重，1千克 = 2.2磅。
// 最后，计算相应的BMI--体重(千克)除以身高(米)的平方。用符号常量表示各种转换因子。

// bmi.cpp -- perform various data conversions and print your BMI
#include <iostream>

int main()
{
    using namespace std;

    int feet, inches, pounds;
    const int F_TO_I = 12;    // 英尺转换为英寸（乘）
    const float I_TO_M = 0.0254;    // 英寸转换为米（乘）
    const float LB_TO_KG = 2.2;    // 磅转换为千克（除）
    
    cout << "Feet: ";
    cin >> feet;
    cout << "Inches: ";
    cin >> inches;
    cout << "Pounds: ";
    cin >> pounds;
    
    int height_inches = feet * F_TO_I + inches;
    cout << "Your height is " << height_inches << " inches" << endl;

    float height_m = height_inches * I_TO_M;
    float weight_kg = pounds / LB_TO_KG;
    cout << "Your height is " << height_m << "m" << endl;
    cout << "Your weight is " << weight_kg << "kg" << endl;

    float bmi = weight_kg / (height_m * height_m);
    cout << "Your BMI is " << bmi << endl;

    system("pause");
    return 0;
}