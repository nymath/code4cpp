/* stack area
- 不要返回局部变量的地址，因为每一次都会发生改变，或者被删除
*/

#include <iostream>
using namespace std;
// 栈区中注意事项

int * func()
{
    int a = 10;
    return &a; //返回局部变量的地址
}

int main()
{
    int * p = func(); // p接收到了地址
    cout << "a为" << *p << endl; // cpp保存一行
    cout << "a为" << *p << endl; // 第二行时，地址被删除，乱码
    return 0;
}