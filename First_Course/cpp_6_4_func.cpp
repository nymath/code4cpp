/* 函数的声明
- 实现main函数写在前边
- 声明可以写多次，但定义只能写一次
- 声明一个函数，比定义一个函数少了body
*/
#include <iostream>
using namespace std;
int max(int a, int b);

int main()
{
    int a = 10;
    int b = 20;
    cout << max(a,b) << endl;
}

int max(int a, int b)
{
    return a > b ? a:b;
}