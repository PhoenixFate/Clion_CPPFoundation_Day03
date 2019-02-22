//
// Created by phoenix on 2/22/2019.
//

#ifndef CLION_CPPFOUNDATION_DAY03_CIRCLE_H
#define CLION_CPPFOUNDATION_DAY03_CIRCLE_H

#include "Point.h"

class Circle {
public:
    double RelationshipOfCircleAndPoint(Point & point);
private:
    Point point;
    double radius;
public:
    const Point &getPoint() const;

    void setPoint(const Point &point);

    double getRadius() const;

    void setRadius(double radius);
};


#endif //CLION_CPPFOUNDATION_DAY03_CIRCLE_H
