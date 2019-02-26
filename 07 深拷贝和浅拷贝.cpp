//
// Created by phoenix on 2/25/2019.
//
#include <iostream>
#include <string.h>
using namespace std;

class Person7
{
public:
    Person7()
    {

    }
    Person7( const char*name,int age)
    {
        this->name=(char*)malloc(strlen(name)+1);
        strcpy(this->name,name);
        this->age=age;
    }
    char *name=NULL;
    int age;

    Person7(const Person7 &p)
    {
        if(this->name!=NULL)
        {
            free(this->name);
            name=NULL;
        }
        this->name=(char*)malloc(strlen(p.name)+1);
        strcpy(this->name,p.name);
        this->age=p.age;
    }

    ~Person7()
    {
        cout<<"调用析构函数"<<endl;
        if(name!=NULL)
        {
            free(name);
            name=NULL;
        }
    }
};

void test701()
{
    Person7 p("abc",20);
    cout<<"name:"<<p.name<<endl;
    Person7 p2(p);
    printf("%p\n",p.name);
    printf("%p\n",p2.name);
}

int main7()
{
    test701();
    return 0;
}

