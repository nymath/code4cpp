/*引用
数据类型 &别名 = 原名
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a = 10;
    int& b = a;
    b = 20; // a,b操纵的是同一块内存
    cout << a << endl; // 
    cout << &b << endl;
    cout << &a << endl; //发现a,b的地址相同
    int c = a; // c的地址不同于a，只是把a的值传递给了c
    c = 30;
    cout << c << endl; // 
    cout << a << endl;
}