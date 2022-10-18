/* 引用作为函数的返回值
1.不要返回局部变量的引用,
2.函数的调用可以作为左值存在
3.局部变量指针也不能返回，总结便是，保存在栈区的变量只能返回值
*/
#include <iostream>
#include <string>
using namespace std;
// int& test01()
// {
//     int a = 10; //静态变量，存放在全局区
//     return a; //函数执行完后a被销毁，自然a的拷贝就没有任何意义了
// }
int& test02()
{
    static int a = 10; //静态变量，存放在全局区
    return a;  //静态变量存放在全局区
}

int main()
{
    int &ref = test02();
    cout << ref << endl;
    cout << ref << endl;
    test02() = 1000;
    cout << ref << endl;
    return 0;
}
