/*
<hr>
1. 可以统计整个数组在内存中的长度
2. 可以获取数组在内存中的首地址


*/touc


#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};
    cout << "arr 所站内存大小: " << sizeof(arr) << endl;
    cout << "arr 第一个元素所站内存大小: " << sizeof(arr[0]) << endl;
    cout << "arr 元素个数: "  << sizeof(arr)/sizeof(arr[0]) << endl;  
    cout << "int 所站内存大小: " << sizeof(int) << endl; 
    cout << "arr 16进制的地址为: " << arr << endl;
    cout << "arr 16进制的地址为: " << (long int)arr << endl;
    cout << "arr 第1个元素的地址" << (long int)&arr[0] << endl;
    cout << "arr 第2个元素的地址" << (long int)&arr[1] << endl; // 等于第一个元素的位置加上4
}