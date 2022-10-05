// sqrt.cpp -- using the sqrt() function

#include <iostream> 
#include <cmath> // or math.h
using namespace std;
int main()
{

    double area;
    cout << "The Area of your house is: ";
    cin >> area;
    double side;
    side = std::sqrt(area);
    cout << "The length is:" << side <<endl;
    return 0;
}

/*summary:
- cout, cin 等价于 std::cout
- sqrt

*/