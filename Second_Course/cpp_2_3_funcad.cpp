/* 函数的重载
- 函数名可以相同，提高复用性
- 参数的类型，数目不同，顺序不同

注意事项：
- 引用作为重载条件
- 默认参数
*/
#include <iostream>
using namespace std;

void func(int& a)
{
    cout << "func 的调用" << endl;
}
void func(const int& num)
{
    cout << "func2222 的调用" << num << endl;
}
void func2(int a,int b=10)
{
    cout << "func 2的调用" << endl;
}
void func2(int a)
{
    cout << "func22 的调用" << endl;
}
int main()
{
    // int a = 10;
    // func(a);
    // const int b=10;
    // func(b);
    // func(10); // const int& a =10; 不合法，但 const int& num = 10合法
    func2(2);
}