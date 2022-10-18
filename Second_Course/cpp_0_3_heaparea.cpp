/* Heap Area
利用new在堆区开辟内存
*/

#include <iostream>
using namespace std;

int* func()
{
    //利用new关键字开辟到堆区
    int * p; // 指针p也是在栈上的
    p = new int(10); // 返回一个地址堆区地址，传递给p
    return p; // 虽然不能访问局部变量的地址，但可以访问局部变量的值
}

int main()
{
    int* q;
    q = func();
    cout << *q << endl;
    cout << *q << endl;

}