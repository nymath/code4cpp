// 判断为A,B,C最大值
#include <iostream>
using namespace std;

int main()
{
    double weight_A;
    double weight_B;
    double weight_C;
    cout << "请输入A的体重: " << endl;
    cin >> weight_A;
    cout << "请输入B的体重: " << endl;
    cin >> weight_B;
    cout << "请输入C的体重: " << endl;
    cin >> weight_C;
    if(weight_A > weight_B)
    {
        if(weight_A > weight_C)
        {
            cout << "A 最重" << endl;
        }
        else
        {
            cout << "C 最重" << endl;
        }
    }
    else
    {
        if(weight_B > weight_C)
        {
            cout << "B 最重" << endl;
        }
        else
        {
            cout << "C 最重" << endl;
        }
    }
}