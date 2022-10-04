// ourfunc.app -- defining you own function
#include <iostream>
void simon(int); // void 意味着没有函数没有返回值

int main()
{
    using namespace std;
    simon(3);
    cout << "Pick an integer: ";
    int count;
    cin >> count;
    simon(count);
    cout << "Done!" << endl;
    return 0;
}

void simon(int n) //define the simon function
{
    using namespace std;
    cout << "Simon says touch your toes" << n << "times." << endl;
} // void functions don't need return statements

/*summary:
- 我们运行一个文件的时候，调用的是他的主函数，而其它的函数需要事先声明并在后续定义


*/