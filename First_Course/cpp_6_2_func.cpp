/* 值传递
定义函数，实现两个数字交换
*/

#include <iostream>
using namespace std;
void swap(int num1, int num2)
{
    cout << "交换前: " << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "交换后: " << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    return; //return 返回值不需要的时候，可以不写return
}


int main()
{
    int a = 10;
    int b = 20;
    swap(a,b);
}