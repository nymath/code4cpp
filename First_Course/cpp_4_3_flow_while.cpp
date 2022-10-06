// while loops
/*
while(cond){
    expr;
}
*/

#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    cout << "the number is: " << num << endl;
    while (num < 10)
    {
        ++num;
        cout << num << endl;
    }
    cout << "after while loops, the number changes to: " << num << endl;
    return 0;
}   

