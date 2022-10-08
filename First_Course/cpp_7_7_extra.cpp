#include <iostream>
using namespace std;

void test(int * brr)
{
    cout << brr[0] << endl;
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    int * p = arr;
    test(p);
}