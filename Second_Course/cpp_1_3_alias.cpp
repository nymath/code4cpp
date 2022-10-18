/* 引用作为函数参数
*/
// 两数进行交换
#include <iostream>
using namespace std;

void swap1(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swap2(int* pa, int* pb)
{
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}

void swap3(int &ca, int &cb)
{
    int temp = ca;
    ca = cb;
    cb = temp;
}


int main()
{
    int a = 10;
    int b = 20;
    swap1(a,b); //形参不会修饰实参
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    a = 10;
    b = 20;
    swap2(&a,&b);
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    a = 10;
    b = 20;
    swap3(a,b);
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    return 0;
}