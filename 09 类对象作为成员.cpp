//
// Created by phoenix on 2/26/2019.
//
#include <iostream>
using namespace std;

class Phone
{
public:
    Phone()
    {
        cout<<"Phone()"<<endl;
    }
    ~Phone()
    {
        cout<<"~Phone()"<<endl;
    }
    Phone(string name):name(name)
    {
        cout<<"Phone(name)"<<endl;
    }
    string name;
};

class Game
{
public:
    Game()
    {
        cout<<"Game()"<<endl;
    }
    ~Game()
    {
        cout<<"~Game()"<<endl;
    }
    Game(string name):name(name)
    {
        cout<<"Game(name)"<<endl;
    }
    string name;
};

class Person9
{
public:
    Person9()
    {
        cout<<"Person()"<<endl;
    }
    ~Person9()
    {
        cout<<"~Person()"<<endl;
    }
    void playGame()
    {
        cout<<name <<" : "<<phone.name<<" : "<<game.name<<endl;
    }
    Person9(string name,string phoneName,string gameName):name(name),game(gameName),phone(phoneName)
    {
        cout<<"Person(x,x,x)"<<endl;
    }
    string name;
    Game game;
    Phone phone;
};

void test901()
{
    Person9 p1;
    cout<<"sizeof p1:"<< sizeof(p1)<<endl;
    Person9 p2("a","b","c");
    p2.playGame();
}

int main9()
{
    test901();
    return 0;
}
