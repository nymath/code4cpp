/* struct_class的区别
在c++中struct和class的**唯一**区别在于默认的访问权限不同
- struct 默认权限为公共
- class 默认权限为私有
*/

#include <iostream>
#include <string>
using namespace std;

class C1
{
    int m_A;
};

struct C2
{
    int m_A;
};
int main()
{
    C1 c;
    // c.m_A = 10; error, 发现是私有成员
    C2 s;
    s.m_A = 100;
    cout << s.m_A << endl;
    return 0;
}
