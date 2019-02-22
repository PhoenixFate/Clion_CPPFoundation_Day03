//
// Created by phoenix on 2/22/2019.
//

#include "Circle.h"

const Point &Circle::getPoint() const {
    return point;
}

void Circle::setPoint(const Point &point) {
    Circle::point = point;
}

double Circle::getRadius() const {
    return radius;
}

void Circle::setRadius(double radius) {
    Circle::radius = radius;
}

double Circle::RelationshipOfCircleAndPoint(Point &point) {
    double distance=(point.getX()-this->getPoint().getX())*(point.getX()-this->getPoint().getX())+(point.getY()-this->getPoint().getY())*(point.getY()-this->getPoint().getY());
    return distance-this->getRadius()*this->getRadius();
}
