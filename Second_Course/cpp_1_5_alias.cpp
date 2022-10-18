/* 引用的本质
- 引用的本质在c++内部实现是一个指针常量.
int a = 10
int& ref = a;
等价于
int* const ref = a;
- 常量引用
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{       
    // 常量引用
}