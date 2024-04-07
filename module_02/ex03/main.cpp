#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

Fixed   computeTriangleArea( Point const &A, Point const &B, Point const &C )
{
    Fixed   Area = 0;
    Area = Area + (A.getX() * (B.getY() - C.getY()));
    Area = Area + B.getX() * (C.getY() - A.getY());
    Area = Area + C.getX() * (A.getY() - B.getY());
    Area = Area / 2;
    if (Area < 0)
        Area = Area * -1;
    return (Area);
}

bool    bsp( Point const &A, Point const &B, Point const &C, Point const &P)
{
    Fixed   SumOfPTriangles = 0;
    SumOfPTriangles = SumOfPTriangles + computeTriangleArea(P, A, B);
    SumOfPTriangles = SumOfPTriangles + computeTriangleArea(P, B, C);
    SumOfPTriangles = SumOfPTriangles + computeTriangleArea(P, A, C);
    if (SumOfPTriangles == computeTriangleArea(A, B, C))
        return (true);
    return (false);
}

int  main(void) {
    Point   A;
    Point   B(10, 30);
    Point   C(20, 0);
    Point   P1(10, 15);
    Point   P2(30, 15);

    std::cout << "Point 1 is ";
    if (bsp(A, B, C, P1) == true)
        std::cout << "inside" << std::endl;
    else
        std::cout << "outside" << std::endl;

    std::cout << "Point 2 is ";
    if (bsp(A, B, C, P2) == true)
        std::cout << "inside" << std::endl;
    else
        std::cout << "outside" << std::endl;
    return (0);
}
