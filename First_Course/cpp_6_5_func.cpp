/* 函数的分文件编写
作用：让代码结构更清晰, 步骤
1. 创建后缀名为.h的头文件
2. 创建后缀名为.cpp的源文件
3. 在头文件中写函数声明
4. 在源文件中写函数定义
*/
#include <iostream>
#include "cpp_6_5_func.h"
using namespace std;

void swap(int a,int b)
{
    int temp = a;
    a = b;
    b =temp;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}
