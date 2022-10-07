/* 二维数组
1. 可以查看占用空间大小
2. 可以查看二维数组的首地址
*/
#include <iostream>
using namespace std;

int main()
{
    int arr[2][3] = {{1,2,3},{4,5,6}};
    cout << "所占空间为: " << sizeof(arr) << endl;
    cout << "第0行占用的内存为 " << sizeof(arr[0]) << endl;
    cout << "arr的地址为: " << arr << endl;
    cout << "等价于" << (long int)arr << endl;
    cout << "arr第0行的地址为" << arr[0] << endl;
    cout << "arr第1行的地址为" << arr[1] << endl;
    cout << "等价于" << (long int)arr[1] << endl; // 可以发现正好为第一个元素加12.
    cout << "根据上述信息，我们可以得到行数，列数" << endl; 
}