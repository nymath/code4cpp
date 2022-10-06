// break 停止当前循环并退出
// continue 跳出当前循环并跳转至下一条循环
#include <iostream>
using namespace std;
// 打印全体奇数
int main()
{
    for(int i=0; i <= 100; i++)
    {
        if(i%2==0)
        {
            continue;
        }
        cout << i << endl;
    }
    return 0;
}