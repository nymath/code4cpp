/*
- new的基本语法
- stack area中
*/
#include <iostream>
using namespace std;

int* func()
{
    int* p;
    p = new int(10);
    return p; // p时一个指针，保存在栈区，但p的值为一个堆区的地址
}

void test01()
{
    int* q = func(); // q接收了一个堆区的地址
    cout << *q << endl;
    // 堆区的数据
    delete q;
    cout << *q << endl;
}

void test02()
{
    int* p = new int[10]; // 创建长度10的int数组
    for(int i=0;i<10;i++)
    {
        p[i] = i +100;
    }
    for(int i=0;i<10;i++)
    {
        cout << p[i] << endl;
    }
    // 释放数组时要加中括号
    delete [] p;
}

int main()
{
    test02();
}