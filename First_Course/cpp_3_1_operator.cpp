#include <iostream>

using namespace std;

int main()
{
    // 四则运算
    int a1 = 10;
    int b1 = 3;
    cout << a1+b1 << endl;
    cout << a1-b1 << endl;
    cout << a1*b1 << endl;
    cout << a1/b1 << endl; 

    float a2 = 10;
    float b2 = 3;
    cout << a2+b2 << endl;
    cout << a2/b2 << endl;

    // float a2 = 10;
    // int b2 = 3;
    // cout << a2/b2 << endl;
    
    // 模
    int a3 = 10;
    int b3 = 20;
    cout << "a3 % b3 = " << a3 % b3 << endl; 

    // 增长
    // ++ 前置递增
    int a = 10;
    ++a; // 增长a
    cout << "++a =" << a << endl;
    int b = 10;
    b++; // b的增长
    cout << "b++ =" << b << endl;
    // 前递增 
    int a22 = 10;
    int b22 = ++a2 * 10; // 先递增，后相乘
    cout << "a22 = " << a22 << endl;
    cout << "b22 = " << b22 << endl;
    // 后递增
    int a33 = 10;
    int b33 = a3++ * 10; // 先相乘，后递增
    cout << "a33 = " << a33 << endl;
    cout << "b33 = " << b33 << endl;
    // 前递减和后递减的区别easy
}

/*summart
+,-,*,/
想一想上述代码，以及抽象代数中，binary structure定义就明白了，我们的二元算符只能是一个从 V \times V \to V 的一个映射，自定规定好就行了
*/