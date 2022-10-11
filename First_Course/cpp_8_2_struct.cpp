/* 结构体数组
将自定义的结构体放入数组中方便维护
1. 定义一个结构体
2. 创建一个结构体数组
3. 给结构体中数组中的元素赋值
4. 遍历结构体数组
*/
#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
    int age;
    double score;
};



int main()
{
    // 创建结构体数组
    struct Student stdarr[3] = 
    {
        {"Nanyi", 18,100},
        {"Nanyi", 20,120},
        {"Nanyi", 22,150}
    };
    // 修改值
    stdarr[2].name = "Ny";
    stdarr[2].age = 30;
    for(int i=0; i<3;i++)
    {
        cout << "Name: " << stdarr[i].name << " age: " << stdarr[i].age << " Score: " << stdarr[i].score << endl;
    }
}
