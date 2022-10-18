/* 代码区
<body>
<p>
- 代码区：存放函数体的二进制代码，由操作系统进行管理
- 全局区：存在全局变量和静态变量
- 栈区：由编译器自动分配释放，存在函数的参数值，局部变量
- 堆区：由程序员分配和释放
</p>
<p>
不同区域存放的数据，赋予不同的声明周期，给我们更大的灵活编程
</p>
</body>
*/
#include <iostream>
#include <string>
using namespace std;
int g_a = 10;
int g_b = 10;
const int c_g_a = 10;

int main()
{
    int a = 10;
    int b = 10;
    cout << "a的地址为: " << &a << endl;
    cout << "b的地址为: " << &b << endl;
    cout << "g_a的地址为: " << &g_a << endl; //局部变量在栈区
    cout << "g_b的地址为: " << &g_b << endl;

    // 静态变量
    static int s_a = 10;
    cout << "s_a的地址为: " << &s_a << endl; //全局区

    // 常量 全局区中靠前的位置
    // 字符串常量
    cout << "字符串常量的地址为：" << &"weqw" << endl; //全局区，靠前
    // const修饰的变量
    // const修饰的全局变量
    cout << "const修饰的全局变量" << &c_g_a << endl; //
    // const修饰的局部变量
    const int c_l_a = 10;
    cout << "const修饰的局部变量地址为" << &c_l_a << endl; // 栈区
}