//
// Created by phoenix on 2/22/2019.
//
#include <iostream>
#include "Circle.h"
using namespace std;

void test201()
{
    Circle c1;
    std::cout<<"address of c1:"<<&c1<<std::endl;
    Circle &c2=c1;
    std::cout<<"address of c2:"<<&c2<<std::endl;
    Circle c3=c2;
    std::cout<<"address of c3:"<<&c3<<std::endl;
}

//利用全局函数判断点和圆的关系
double relationshipOfCircleAndPoint(Circle &c,Point &point)
{
    double distance=(c.getPoint().getX()-point.getX())*(c.getPoint().getX()-point.getX())+(c.getPoint().getY()-point.getY())*(c.getPoint().getY()-point.getY());
    return distance-c.getRadius()*c.getRadius();
}

void test202()
{
    Point p;
    p.setX(5);
    p.setY(5);
    Circle c;
    c.setPoint(p);
    c.setRadius(5);
    Point p2;
    p2.setY(3);
    p2.setX(3);
    double relation=relationshipOfCircleAndPoint(c,p2);
    cout<<"relation:"<<relation<<endl;
    if(relation==0)
    {
        cout<<"\b点在圆上"<<endl;
    }else if( relation >0 )
    {
        cout<<"\b点在圆外"<<endl;
    }else if(relation <0)
    {
        cout<<"\b点在圆上"<<endl;
    }
}

void test203()
{
    Point p;
    p.setX(5);
    p.setY(5);
    Circle c;
    c.setPoint(p);
    c.setRadius(5);
    Point p2;
    p2.setY(3);
    p2.setX(3);
    double relation=c.RelationshipOfCircleAndPoint(p2);
    cout<<"relation:"<<relation<<endl;
    if(relation==0)
    {
        cout<<"\b点在圆上"<<endl;
    }else if( relation >0 )
    {
        cout<<"\b点在圆外"<<endl;
    }else if(relation <0)
    {
        cout<<"\b点在圆上"<<endl;
    }
}
int main()
{
    test201();
    test202();
    test203();
    std::cout<<"-----------------------------02-----------------------------"<<std::endl;
    return 0;
}

