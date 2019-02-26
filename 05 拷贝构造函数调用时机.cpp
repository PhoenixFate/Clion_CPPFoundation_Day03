//
// Created by phoenix on 2/24/2019.
//
#include <iostream>
using namespace std;


class Person5
{
public:
    Person5()
    {
        cout<<"Person5()"<<endl;
    }

    Person5(int a)
    {
        this->age=a;
        cout<<"Person5(int)"<<endl;
    }
    Person5(const Person5 & p)
    {
        this->age=p.age;
        cout<<"\b拷贝构造函数"<<endl;
    }
    ~Person5()
    {
        cout<<"~Person5()"<<endl;
    }
public:
    int age;
};

//第一种调用拷贝构造函数
void test501()
{
    Person5 p1(10);
    Person5 p2(p1);
    Person5 p3=p1;
    cout<<"----------------------------end of 01----------------"<<endl;
}

//第二种调用拷贝构造函数 以值传递的方式调用拷贝构造函数
void doWork(Person5 p)
{

}

void test502()
{
    Person5 p1(10);
    doWork(p1);
    cout<<"------------------02-----------------"<<endl;
}

//以值的方式返回局部对象
Person5 doWork2()
{
    Person5 p;
    return p;
}

void test503()
{
    cout<<"--------------------03---------------"<<endl;
    Person5 p=doWork2();
}

void test504()
{
    Person5 p1(10);
    Person5 p2(20);
    cout<<"address of p1: "<<&p1<<endl;
    cout<<"address of p2: "<<&p2<<endl;
    p1=p2;
    cout<<"address of p1: "<<&p1<<endl;
    cout<<"address of p2: "<<&p2<<endl;
    cout<<p1.age<<endl;
    cout<<p2.age<<endl;
}

int main5()
{
    test501();
    test502();
    test503();
    test504();
    return 0;
}

