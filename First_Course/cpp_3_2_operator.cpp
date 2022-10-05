// 赋值运算符
// =; +=; -=; *=;
// a += b \iff a = a+b 
#include <iostream>

using namespace std;
 
int main()
{
    int a = 10;
    cout << "a = " << a << endl;
    a += 10;
    cout << "a += 2 is " << a << endl;
    a = 10;
    a *= 2;
    cout << "a *= 2 is " << a << endl;
    return 0;
}