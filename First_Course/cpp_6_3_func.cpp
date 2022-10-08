/* 函数的常见样式

*/
#include <iostream>
using namespace std;
// 无参，无返
void test01()
{
 cout << "This is test01" << endl;
}
void test02(int a)
{
    cout << "This is test02, a = " << a << endl;
}

int num1 = test03();
{
    cout << "this is test03" << endl;
    return 1000;
}

int test04(int a)
{
    cout << "this is test04, a = " << a << endl;
    return a;
}

int main(){
    test01();
    test02(100);
    test03();
    test04(100);
}