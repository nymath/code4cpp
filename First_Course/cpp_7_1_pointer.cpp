/*
- 指针是一种type，元素为数据的地址，在mac中指针占用8个字节
- 指针的地址通常为对象的地址减去12,16, 总之是在附近就是了
= 

*/
#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    // 定义一个指针: 数据类型 * 指针变量，
    int * p;
    // 让指针变量
    p = &a; // 取址符号
    cout << "a的地址为: " << &a << endl;
    cout << "指针p为: " << p << endl;
    cout << "指针p为: " << &p << endl;
    // 使用指针
    // 可以通过解引用的方式来找到指针指向的内存
    // 即 *p
    *p = 1000;
    cout << "a = " << a << endl;
    cout << "*p = " << *p <<endl;
}