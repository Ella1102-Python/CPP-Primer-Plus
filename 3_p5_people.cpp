// 编写一个程序，要求用户输入全球当前的人口和美国当前的人口（或其他国家的人口），将这些信息存储在 long long 变量中。
// 并让程序显示美国（或其他国家）的人口占全球人口的百分比。该程序的输出应与下面类似：
// Enter the world's population: 6898758899
// Enter the population of the US: 310783781
// The population of the US is 4.50492% of the world population

// people.cpp -- output percentage
#include <iostream>

int main()
{
    using namespace std;
    
    long long world_p, country_p;
    cout << "Enter the world's population: ";
    cin >> world_p;
    cout << "Enter the population of the US: ";
    cin >> country_p;

    float percent = double (country_p) / double (world_p) * 100;    // 百分数（百分号前的小数）

    cout << "The population of the US is " << percent << "% of the world population.";

    system("pause");
    return 0;
}