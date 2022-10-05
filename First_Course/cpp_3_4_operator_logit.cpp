// or, and, not
#include <iostream>

using namespace std;
int main()
{
    int a = 10; // a为真
    cout << "a is " << a << endl;
    cout << "!a is " << (!a) << endl;
    cout << "!!a is " << (!!a) << endl;


}


/*

- In cpp, a value that does not equal 0 can be seen as true.   
<hr>
command| use
--------|---------
|| | or
&& | and
!  | not
<hr>

Also, suppose V = {true,false}, then (V,|) is a Abelian group.

*/