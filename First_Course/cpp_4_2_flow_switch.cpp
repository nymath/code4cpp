/*
switch(expr)
{
    case1 :break;
    
    case2 :break;

    default: 执行语句;break;
}
*/
// 电影打分系统
#include <iostream>
using namespace std;

int main()
{
int score;
cout << "Please give some comment to this film: " << endl;
cin >> score;
cout << "your score is: " << score << endl;
switch (score)
{
case 10:
    cout << "经典" << endl;
    break; // 退出当前分支
case 8:
    cout << "经典" << endl;
    break; // 退出当前分支
default:
    cout << "烂" << endl;
}

return 0;
}

/* Summary:

Command| Use


*/