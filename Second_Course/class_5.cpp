/* 将成员属性设置为私有
- 私有化可以控制读写权限
- 可以检测数据的有效性
*/
#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    // 姓名可读可写
    void set_name(string x)
    {
        name = x;
    }
    string get_name()
    {
        return  name;
    }
    // 年龄只可读
    int get_age()
    {
        return age;
    }
    // 
    void set_age(int x)
    {
        if(x<0 ||x > 150)
        {
            cout << "输入年龄有误" << endl;
            return;
        }
        age =x;
    }
    // lover 只写
    void set_lover(string x)
    {
        lover = x;
    }
private:
    string name;
    int age = 0;
    string lover;
    
    

};

int main()
{
    Person p;
    p.set_name("ZhangSan");
    p.set_lover("test");
    p.set_age(1000);
    cout << p.get_name() << endl;
    cout << p.get_age() << endl;
    return 0;
}