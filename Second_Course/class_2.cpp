/*
- 类中的属性和行为 我们统一称为成员
- 属性：成员属性 成员变量
- 行为：成员函数 成员方法
*/
#include <iostream>
#include <string>
using namespace std;

class student
{
    public:
    int age;
    string name;
    // method
    void show()
    {
        cout << "姓名: " << name << " 年龄: " << age << endl;
    }
    void set_name(string x)
    {
        name = x;
    }
    void set_age(int x)
    {
        age = x;
    }
};


int main()
{
    student s1;
    // s1.age=18;
    // s1.name = "张三";
    s1.set_age(20);
    s1.set_name("张三");
    s1.show();
    return 0;
}