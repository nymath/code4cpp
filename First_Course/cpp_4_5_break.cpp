//break 语句
#include <iostream>
using namespace std;

int main()
{
    //break的使用时机
    /*-------------------------------------------------------------------*/
    cout << "请选择难度" << endl;
    cout << "1 普通" << endl;
    cout << "2 中等" << endl;
    cout << "3 困难" << endl;
    int select=0;
    cin >> select;
    // 注意switch是从符合条件的case后边都会执行，所以应当加上break
    switch(select)
    {
        case 1:
            cout << "你选择的是普通难度" << endl;
            break;
        case 2:
            cout << "你选择的是中等难度" << endl;
            break;
        case 3:
            cout << "你选择的是困难难度" << endl;     
            break;
        default:
            break;
    }   
    /*-------------------------------------------------------------------*/
    for(int i=0; i<10; i++)
    {
        if(i==5)
        {
            break;
        }
        cout << i << endl;
    }


}