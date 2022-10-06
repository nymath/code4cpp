// 嵌套循环，乘法口诀表
#include <iostream>
using namespace std;

int main()
{
    for(int j=0; j<10; j++)
    {
        for(int i=0; i < 10; i++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for(int i=1; i<10; i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout << j << "times" << i << " ";
        }
        cout << endl;
    }

    return 0;

}