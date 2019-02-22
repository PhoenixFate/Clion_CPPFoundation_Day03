//
// Created by phoenix on 2/22/2019.
//

#ifndef CLION_CPPFOUNDATION_DAY03_POINT_H
#define CLION_CPPFOUNDATION_DAY03_POINT_H


class Point {
public:
    double getX() const;

    void setX(double x);

    double getY() const;

    void setY(double y);

private:
    double x;
    double y;
};


#endif //CLION_CPPFOUNDATION_DAY03_POINT_H
