/*
- 如果某个位置已经有了默认参数，那么从这个位置开始，后边必须设有默认值
- 函数声明和函数实现只能有一个有默认参数
*/
#include <iostream>
using namespace std;
void func(int a, int b=20, int c=10){
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
}
int main()
{
    func(10,30);
    
}