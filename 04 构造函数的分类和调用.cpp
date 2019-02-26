//
// Created by phoenix on 2/22/2019.
//
#include <iostream>
using namespace std;

class Person4
{
public:
    Person4()
    {
        cout<<"person()"<<endl;
    }
    Person4(int a)
    {
        this->a=a;
    }

    ~Person4()
    {
        cout<<"~Person()"<<endl;
    }

    Person4(const Person4 & p)
    {
        Person4::a=p.a;
        cout<<"copy constructor"<<endl;
    }

private:
    int a;
};

void test401()
{
    Person4 p();
    Person4 p1(1);
    Person4 p2(p1);

}

int main4()
{
    cout<<"-------------------04-------------------------"<<endl;
    return 0;
}


