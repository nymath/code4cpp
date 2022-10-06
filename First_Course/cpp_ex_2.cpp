#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int num; 
    srand((unsigned int)time(NULL));
    num = rand()%100 + 1;
     //生成1~100的随机数
    // cout << num << endl;
    int val;
    cout << "请输入你的猜测: " << endl;
    while (1)
    {
        cin >> val;
        if (val > num)
        {
            cout << "猜测过大" << endl;
        }
        else if (val < num)
        {
            cout << "猜测过小" << endl;
        }
        else
        {
            cout << "猜对了!" << endl;
            break;
        }
    }
    
    return 0; 
}