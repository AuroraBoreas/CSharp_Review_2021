#include <iostream>
#include <iomanip>
#include <string>
#include "point.h"
#include "pointcollection.h"

using namespace std;

int MX = 30;

int main()
{
    Point p0 = Point(), p3 = Point{},
          p1,
          p2(1, 2);

    Point myPoints[] = { p0, p1, p2, p3 };
    for(int i=0; i<4; ++i)
        std::cout << "point(" << i << ") is : " << myPoints[i] << std::endl;

    std::cout << "p1 == p2 is : " << std::boolalpha << (p1 == p2) << std::endl;
    std::cout << "p2 = " + p2.ToString() << std::endl;

    std::string s1 = "hello",
                s2 = "world";

    std::cout << "s1 == s2 : " << std::boolalpha << (s1 == s2) << std::endl;
    std::cout << "-p2 is : " << (-p2).ToString() << std::endl;

    // test PointCollection class

    PointCollection pc = PointCollection(10);
    pc[0] = Point();
    pc[1] = Point(1, 1);
    pc[2] = Point(2, 3);

    for(int i=0; i<10; ++i)
        std::cout << pc[i] << std::endl;

    std::cout << pc[11] << std::endl;
    return 0;
}
