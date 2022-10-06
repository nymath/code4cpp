/*
1. 比较相邻元素，如果第一个大于第二个，就交换他们两个
2. 对每一对相邻元素作同样的工作，找到第一个最大值
3. 重复上述流程，每次比较次数-1
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[9] = {4,2,8,0,5,7,1,3,9};
    
    cout << "排序前的结果为: ";
    cout << "{";
    for (int i=0; i<9; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << "}";
    cout << endl;

    // 开始冒泡排序, 一共进行了n(n-1)/2 次排序
    for(int i=0; i < 8; i++)
    {
        for(int j =0; j < 8-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout << "排序后结果为: ";
    cout << "{";
    for (int i=0; i<9; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << "}";
    cout << endl;

    return 0;
}