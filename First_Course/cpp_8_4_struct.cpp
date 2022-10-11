/* 结构体嵌套结构体
    string name;
    int age;
    int score;
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

struct teacher
{
    int id;
    string name;
    int age;
    student stu;
};

int main()
{
    teacher tc;
    tc.id = 10086;
    tc.name = "Meng";
    tc.age = 50;
    tc.stu.name = "Ny";
    tc.stu.age = 20;
    tc.stu.score = 92;
    cout << tc.stu.score << endl;
}