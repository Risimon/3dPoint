#include <iostream>
#include "Point3d.h"

int main() {
    Point3d p1{};
    Point3d p2{ 3.0, 4.0, 5.0};
    p1.print();
    p2.print();
    std::cout << "Distance: " << p1.distanceTo(p2) << "\n";
    return 0;
}
