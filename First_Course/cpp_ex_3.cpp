// 1-100 中
// 7的倍数 x % 7 = 0
// 个位有7 x % 10 = 7
// 十位有7 x / 10 = 7
#include <iostream>
using namespace std;

int main()
{
    for(int i=1; i <=100; i++)
    {
        if((i%7==0)||(i%10==7)||((i/10==7)))
        {
            cout << "pad" << endl;
        }
        else
        {
            cout << i << endl;
        }
    }
}