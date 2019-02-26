//
// Created by phoenix on 2/26/2019.
//
#include <iostream>
using namespace std;

class Person11
{
public:
    Person11()
    {
        cout<<"Person11()"<<endl;
    }
    Person11(int a)
    {
        this->a=a;
    }
    ~Person11()
    {
        cout<<"~Person11()"<<endl;
    }
    int a;
};


void test1101()
{
    Person11 *p=new Person11();
    delete (p);
    Person11 *pp=new Person11();
    delete pp;
}

void test1102()
{
    void *p=new Person11();
    //当用void *会出现释放问题
    delete p;//无法释放
}

void test1103()
{
    Person11 *p=new Person11[10]{1,2,3,4,5,6,7,8,9,0};
    for(int i=0;i<10;++i)
    {
        cout<<p[i].a<<endl;
    }
    delete[]p;
}

int main()
{
    //test1101();
    //test1102();
    test1103();
    return 0;
}

