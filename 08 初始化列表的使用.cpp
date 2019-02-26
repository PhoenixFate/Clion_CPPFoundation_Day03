//
// Created by phoenix on 2/25/2019.
//
#include <iostream>
using namespace std;

class Person8
{
public:

    //传统有参构造
//    Person8(int a,int b,int c)
//    {
//        this->a=a;
//        this->b=b;
//        this->c=c;
//    }
    Person8():a(1),b(2),c(3)
    {

    }
    //利用初始化列表来初始化数据
    Person8(int a,int b,int c):a(a),b(b),c(c)
    {

    }

    int a;
    int b;
    int c;
};

void test801()
{
    Person8 p1(10,20,30);
    cout<<p1.a<<" "<<p1.b<<" "<<p1.c<<endl;
    Person8 p2;
    cout<<p2.a<<" "<<p2.b<<" "<<p2.c<<endl;
}

int main8()
{
    test801();
    return 0;
}

