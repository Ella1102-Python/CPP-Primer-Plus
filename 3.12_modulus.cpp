// modulus.cpp -- uses  % operator to convert lbs to stone
#include <iostream>

int main()
{
    using namespace std;
    const int LBS_PER_STN = 14;
    int lbs;

    cout << "Enter your weight in pounds: ";
    cin >> lbs;
    int stone = lbs / LBS_PER_STN;    // （整数部分）英石
    int pounds = lbs % LBS_PER_STN;    // （剩余的）磅
    cout << lbs << "pounds are " << stone << " stone, " << pounds << " pound(s)." << endl;
    system("pause");
    return 0;
}