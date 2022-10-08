/* 指针所占内存空间
*/


#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int * p = &a;
    cout << sizeof(a) << endl;
    cout << sizeof(int *) << endl;  //指针占用8个字节tou
    cout << sizeof(float *) << endl; 
    cout << sizeof(double *) << endl; 
    cout << sizeof(char *) << endl; 

}