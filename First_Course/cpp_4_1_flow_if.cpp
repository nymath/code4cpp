// 选择结构
/* Summary:

Command| Use
if(cond){} | 
if(){} else{}|
if(cond){}else if(cond){}|
cond ? a:b| 
*/

#include <iostream>
using namespace std;

int main()
{
// 单行if, 如果分数大于700，则恭喜
    // int score;
    // cout << "请输入你的高考分数: " << endl;
    // cin >> score;
    // cout << "您的高考分数为: " << score << endl;
    // if(score >700)
    // {
    //     cout << "恭喜您考上了贸大" << endl;
    // }
// 多行if
    int score;
    cout << "请输入你的高考分数: " << endl;
    cin >> score;
    cout << "您的高考分数为: " << score << endl;
    if(score > 700)
    {
        cout << "上清北了" << endl;
    }
    else if(score > 650)
    {
        cout << "上贸大了" << endl;
    }
    else
    {
        cout << "上了" << endl;
    }
// 三目运算符，返回的是一个变量，进而可以继续赋值
    int a = 10;
    int b = 20;
    int c;
    c = ((a>b) ? a:b);
    cout << "The lager number is: " << c << endl;
    return 0;
}


