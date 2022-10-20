/*类与对象
面向对象的三大特性: 封装，继承，多态
- 封装的意义:
- - 将attribution和method作为一个整体
- - 将attribute和method加以权限控制
- syntax: class type { authority: attribute / method}
*/
#include <iostream>
#include <string>
using namespace std;
const double Pi = 3.14;
class circle
{
    public:
    int r;
    double calculate_perimeter()
    {
        return 2*Pi*r;
    }
};


int main()
{
    circle c1; //Initialization
    c1.r = 10;
    cout << "圆的周长为" << c1.calculate_perimeter() << endl;
    return 0;
}