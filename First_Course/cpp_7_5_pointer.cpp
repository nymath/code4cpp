/* 利用指针访问数组中的元素

*/
#include <iostream>
using namespace std;

int main()
{
    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    cout << "第一个元素为: " << endl;
    int * p;
    p = arr;
    cout << *p << endl;
    cout << *(p+1) << endl;
    cout << p[0] << endl;
    cout << p[1] << endl;
    // cout << arr << endl;
    // cout << &p << endl;
    // cout << *(p+1) << endl;
    // cout << p+1 << endl; // p+1等价于加4,
    // 从而我们可以
    // int * q = arr;
    // for(int i=0;i<10;i++)
    // {
    //     cout << *q << endl;
    //     cout << q << endl;
    //     q++;
    // }
}