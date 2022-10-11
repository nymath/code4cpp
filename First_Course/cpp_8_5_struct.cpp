/* 结构体做函数参数
*/
#include <iostream>
#include <string>
using namespace std;

struct student
{
    string name;
    int age;
    int score;
};

void prtinfo(student s)
{
    cout << "子函数中" << s.name << " " << s.age << " " << s.score << endl;
}

void prtinfo2(student * sp)
{
    sp->name = "Yz";
    cout << "当传入的是结构体指针: " << sp->name << " " << sp->age << " " << sp->score << endl;
}


int main()
{
    // 结构体做函数参数
    student stu;
    stu.name = "ny";
    stu.age = 20;
    stu.score = 92;
    cout << stu.name << " " << stu.age << " " << stu.score << endl;
    prtinfo(stu);
    prtinfo2(&stu);
    cout << stu.name << endl;
}