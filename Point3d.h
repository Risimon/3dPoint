//
// Created by Yevgeniy on 10/15/21.
//

#ifndef INC_3DPOINT_POINT3D_H
#define INC_3DPOINT_POINT3D_H

#include <iostream>
#include <cmath>

class Point3d {
    double m_x;
    double m_y;
    double m_z;
public:
    Point3d() = default;
    Point3d(double x, double y, double z): m_x{x}, m_y{y}, m_z{z}
    {
    }
    ~Point3d(){
        //std:: cout << "Deconstructor executed\n";
    }
    void print() const;
    double distanceTo(const Point3d&) const;
};


#endif //INC_3DPOINT_POINT3D_H
