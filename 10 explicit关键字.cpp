//
// Created by phoenix on 2/26/2019.
//
#include <iostream>
using  namespace std;

class MyString
{
public:
    MyString(const char* c)
    {

    }
    explicit MyString(int a)//explicit : 防止隐式类型转换
    {

    }
    char* c;
};

void test1001()
{
    MyString str="abc";
    //MyString s=10;
    MyString s2(10);
}

int main10()
{
    test1001();
    return 0;
}
