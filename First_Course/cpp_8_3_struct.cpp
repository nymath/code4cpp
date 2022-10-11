/* 结构体指针
- 通过指针访问结构体中的成员
- 利用->
*/

#include <iostream>
#include <string>
using namespace std;

struct  student
{
    string name;
    int age;
    int score;
};

int main()
{
    // 创建学生结构体变量
    student s1 = {"Ny", 18 ,100};
    cout << "s1的地址为: " << &s1 << endl;

    // 通过指针指向结构体变量
    student * p = &s1;
    cout << p << endl;
    cout << &p << endl;
    // 通过指针访问结构体变量的数据
    cout << "Name: " << p->name << " age: " << p->age << " Score: " << p->score << endl;
}
