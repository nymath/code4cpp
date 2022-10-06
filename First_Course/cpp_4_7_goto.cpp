#include <iostream>
using namespace std;

int main()
{
    goto FLAG;
    cout << "1" << endl;
    cout << "2" << endl;
    cout << "3" << endl;
    FLAG:
    cout << "4" << endl;
    
    return 0;
}