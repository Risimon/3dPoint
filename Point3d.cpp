//
// Created by Yevgeniy on 10/15/21.
//

#include "Point3d.h"

void Point3d::print() const{
   std::cout << "Point3d(" << m_x << ", " << m_y << ", " << m_z << ")\n";
}

double Point3d::distanceTo(const Point3d& point3D) const {
    return sqrt(pow(m_x - point3D.m_x, 2) + pow(m_y - point3D.m_y, 2) + pow(m_z - point3D.m_z, 2));
}
