// 数组元素逆
#include <iostream>
using namespace std;
// int
int main()
{
    int arr[5]={5,4,3,2,1};
    int start = 0;
    int end = sizeof(arr)/sizeof(arr[0])-1;
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;        
    }
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++)
    {
        cout << arr[i] << "," ;
    }
    cout << endl;
    return 0;
}