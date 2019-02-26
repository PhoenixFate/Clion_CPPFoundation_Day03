//
// Created by phoenix on 2/24/2019.
//
#include <iostream>
using namespace std;

class MyClass
{
public:
    MyClass()
    {
        cout<<"MyClass()"<<endl;
    }
    MyClass(int a)
    {
        this->age=a;
        cout<<"MyClass(int)"<<endl;
    }
    int age;
};

void test601()
{
    MyClass c1(10);
    MyClass c2(c1);
    cout<<c2.age<<endl;
}

class MyClass2
{
    MyClass2(const MyClass2 &c)
    {

    }
    int age;
};

int main6()
{
    test601();
    cout<<"---------------------------------06-------------------"<<endl;
    return 0;
}

