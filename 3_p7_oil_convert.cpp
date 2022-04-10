// 编写一个程序，要求用户按欧洲风格输入汽车的油耗量（每100公里消耗的汽油量（升））。然后将其转换为美国风格的油耗量：每加仑多少英里。
// 注意，除了使用不同的单位计量外，美国方法（距离/燃料），与欧洲方法（燃料/距离）相反。100公里等于62.14英里，1加仑等于3.875升。因此，19mpg 大约合 12.41/100km，27mpg 大约合 8.71/100km。
//（MPG 是MILE PER GALLON = 每加仑汽油能距的英里数）

// oil_convert -- 
#include <iostream>

int main()
{
    using namespace std;
    
    const float M_TO_MILE = 62.14/100;
    const float L_TO_G = 3.875;
    float oil_100;    // 每100公里消耗的汽油量
    cout << "The amount of gasoline consumed per 100 kilometers: ";
    cin >> oil_100;
    float unit_km = 100 / oil_100;    // 计算每升多少公里
    // 公式：每升可走的公里数 * 62.14/100（公里和英里的长度比） * 3.875（1加仑=3.875升）
    float unit_mile = unit_km * M_TO_MILE * L_TO_G;
    cout << "1 gallon " << unit_mile << " miles." << endl;

    system("pause");
    return 0;
}