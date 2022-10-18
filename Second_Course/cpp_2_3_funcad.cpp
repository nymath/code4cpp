/* 函数的重载
- 函数名可以相同，提高复用性
- 参数的类型，数目不同
*/
#include <iostream>
using namespace std;

void func()
{
    cout << "func 的调用" << endl;
}
void func(int num)
{
    cout << "func 的调用" << num << endl;
}

int main()
{
    func();
    func(10);
}