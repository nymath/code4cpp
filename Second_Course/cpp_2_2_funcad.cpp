/* 函数占位参数
*/

#include <iostream>
#include <string>
using namespace std;
void func(int a,int)
{
    cout << "This function is used for testing." << endl;
}
int main()
{
    // func(10); //函数调用的参数太少
    func(10,10);
}