/* 指针和函数
改变a,b的值
*/

#include <iostream>
using namespace std;

void swap01(int a,int b)
{
    cout << "&a = " << &a << endl;  
    int temp = a;
    a = b;
    b = temp;
    cout << "&a = " << &a << endl;  

}
// 地址传递
void swap02(int * p1,int * p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
int main()
{
    int a = 10;
    int b = 20;

    swap01(a,b); 
    cout << "swap01之后" << endl;
    cout << "a = " << a << endl;
    cout << "&a = " << &a << endl;
    cout << "b = " << b << endl;   
    cout << "&b = " << &b << endl;    
    swap02(&a,&b);
    cout << "swap02之后" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "&a = " << &a << endl;   
    cout << "&b = " << &b << endl;   
}