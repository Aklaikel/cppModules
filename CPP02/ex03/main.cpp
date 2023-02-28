#include "Point.hpp"

int main(void) {
    Point const a(Fixed(3), Fixed(3));
    Point const b(Fixed(5), Fixed(0));
    Point const c(Fixed(1), Fixed(0));
    //outside
    Point const pt(Fixed(4), Fixed(2));
    //inside
    Point const pt2(Fixed(3), Fixed(1));
    //in the edge
    Point const pt3(Fixed(4), Fixed(1.5f));
    bool outside = bsp(a, b, c, pt);
    bool inside = bsp(a, b, c, pt2); 
    bool edge = bsp(a, b, c, pt3);
    Point cc;
    std::cout << cc.AreaTriangle(a,b,c) << std::endl;
    std::cout << cc.AreaTriangle(a,b,pt2)<< std::endl;
    std::cout << cc.AreaTriangle(a,pt2,c)<< std::endl;
    std::cout << cc.AreaTriangle(b,pt2,c)<< std::endl;
    if (inside)
        std::cout << "inside" <<std::endl;
    if (!outside)
        std::cout << "outside" <<std::endl;
    if (!edge)
        std::cout << "edge" <<std::endl;

    return 0;
}