/*
<hr>
# 数组三种定义方法
数据类型 数组名[数组长度];
数据类型 数组名[数组长度] = {value1,...,value_n}; 如果数组中的长度小于给定长度，则用0填补
数据类型 数组名[] = {value1,...,value_n};
<hr>
# 数组的特点
- 放在一块连续的内存空间中
- 数组中的每个元素都是相同的数据类型
# 数组的访问
- arr[0]: arr中的第一个数据，与python中相同

*/

#include <iostream>
using namespace std;

int main()
{
    cout << "please choose the type of array" << endl;
    cout << "You have the following choice: " << endl;
    cout << "1, 2, 3" << endl;
    int num;
    cin >> num;
    switch (num)
    {
        case 1:
            cout << "Well, you choose type1, which prints the last number of an array that has length 5." << endl;
            int arr[5];
            for(int i=0; i<5; i++)
            {
                arr[i] = i*10;
            }
            cout << arr[4] << endl;          
            break;
        case 2:
            cout << "Well, you choose type1, which prints the last number of an array that has length 5." << endl;
            int score2[10] = {100,90,80,70,60,50,40,30,20,10};
            cout << score2[2] << endl;
            break;
        case 3:
            cout << "Well, you choose type1, which prints the last number of an array that has length 5." << endl;
            int score2[] = {100,90,80,70,60,50,40,30,20,10};
            cout << score2[2] << endl;
            break;
    }      
    return 0;
}