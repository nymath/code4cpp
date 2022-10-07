/* cpp的函数
- 将常用代码封装起来，减少重复代码

1. 返回值类型 int
2. 函数名 add
3. 参数列表 (int num1, int num2)
4. body int sum = num1+num2
5. return return sum

*/
#include <iostream>
using namespace std;

int add(int num1, int num2)
{
    // num1, num2并没有真实数据，只是一个形参
    int sum = num1 + num2;
    return sum;
}

int main()
{
    cout << "请按先后输入a,b" << endl;
    int a,b;
    cin >> a;
    cin >> b;
    // a,b简称为实参
    int sum = add(a,b);
    cout << sum << endl;
    return 0;
}