/* 二维数组
数据类型
*/
#include <iostream>
using namespace std;

int main()
{
    int num = 0 ;
    cout << "Please type in a number(1,2,3,4): " << endl;
    cin >> num;
    switch (num)
    {
    case 1:
        int arr[2][3];
        arr[0][0] =1;
        arr[0][1] =2;
        arr[0][2] =3;
        arr[1][0] =4;
        arr[1][1] =5;
        arr[1][2] =6;

        cout << sizeof(arr) << endl;
        for(int i=0; i < 2; i++)
        {
            for(int j=0; j<3; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        break;
    case 2:
        int brr[2][3] = {{1,2,3},{4,5,6}};
        for(int i=0; i < 2; i++)
        {
            for(int j=0; j<3; j++)
            {
                cout << brr[i][j] << " ";
            }
            cout << endl;
        }
        break;
    }
    return 0;
}