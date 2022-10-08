/* const 修饰指针, 常量指针

- const int * p = &a;
- int * const p = &a;
- const int * const p =&a
- - 指针的地址可以改，但值不能改
*/

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;
    
    const int * p = &a;

    // *p = 20;, 指向的值不能修改 
    cout << *p << " " << p << endl;
    p = &b;
    cout << *p << " " << p << endl;

    int * const p = &a;
    const int * const = &a;
}