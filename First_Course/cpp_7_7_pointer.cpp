/* 封装一个函数，利用冒泡排序，实现对整数组升序排序
这和pandas里一个操作很像，就是是否inplace=True，感觉如果inplace=False，那么
*/
#include <iostream>
using namespace std;

void bubbleSort(int * p,int len) //用指针接收首地址
{
    for(int i=0; i < len - 1;i++)
    {
        for(int j=0; j < len-i-1;j++)
        {
            if(p[j] > p[j+1])
            {
                int temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
            }
        }
    }
}

void printArray(int * arr, int len)
{
    for(int i=0;i < len;i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    // 1. 创建数组
    int arr[10] = {4,3,6,9,1,2,10,8,7,5};
    int len = sizeof(arr)/sizeof(arr[0]);
    int * po = arr;
    // 2. 创建函数实现排序
    bubbleSort(arr,len);
    printArray(arr,len);
    // 3. 展示排序后的数组
}