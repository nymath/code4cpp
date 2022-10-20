/*
权限
- public: 成员类内,类外均可以访问
- protected: 成员类内可以访问，类外不能访问，可以继承
- private: 成员类内可以访问，类外不能访问，不可以继承
*/
#include <iostream>
#include <string>
using namespace std;

class Person
{
    public:
    string name;
    protected:
    string car; 
    private:
    int password;
    public:
    void func()
    {
        name = "张三"; //类内可以访问
        car = "拖拉机"; //类内可以访问
        password = 123456; //类内可以访问
    }
};

int main()
{
    Person p1;
    p1.func();
    cout << p1.name << endl;
    // cout << p1.car << endl;   保护权限的内容在类外无法访问
    // p1.func()
    return 0;
}