/* 结构体
结构体属于用户自定义的数据类型，允许用于存储不同的数据类型
**语法**: struct 结构体名 {结构体成员列表};

*/
#include <iostream>
#include <string>
using namespace std;
// 1. 创建学生的数据类型：姓名，年龄，分数
// 2. 创建具体的学生

// 本质是已有的类型组合形成的一个类型
struct Student
{
    string name;
    int age;
    double score;
};

int main()
{
// 1. 第一种创建方法
// 通过. 访问结构体变量中的特征
// s1 也称为一个initation
struct Student s1;
s1.age = 21;
s1.name = "nanyi";
s1.score = 92.2;
cout << "Name: " << s1.name << " 年龄: " << s1.age << " 分数: " << s1.score << endl;
// 2. 第二种创建方法
struct Student s2 = {"Soblev", 23, 94.8};
cout << "Name: " << s2.name << " 年龄: " << s2.age << " 分数: " << s2.score << endl;
}

