/*
<ol>
<li>引用必须要初始化，即创建的时候必须指定b是谁的别名</li>
<li>引用一旦指向初始化后，就不可以更改，其实是int* const p</li>
<li><.li>
</ol>
*/

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int &b = a;
    // int &c;
    b = 20;
    cout << b << endl;
    // &b = d;
    int &bb = b;
    cout << bb << endl;
    bb = 50;
    cout << bb << endl;
    return 0;
}