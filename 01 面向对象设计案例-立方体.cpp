#include <iostream>
using namespace std;

class Cube
{
public:
    int getLength() const {
        return length;
    }

    void setLength(int length) {
        Cube::length = length;
    }

    int getWidth() const {
        return width;
    }

    void setWidth(int width) {
        this->Cube::width = width;
    }

    int getHeight() const {
        return height;
    }

    void setHeight(int height) {
        Cube::height = height;
    }

    //求立方体的面积
    int getCubeSpace(){
        int area=(length*width+width*height+length*height)*2;
        cout<<"space of cube:"<<area<<endl;
    }

    int getCubeVolume()
    {
        int volume=length*width*height;
        cout<<"volume of cube:"<<volume<<endl;
    }

    bool compareCube(const Cube &cube)
    {
        if(this->length==cube.getLength() && this->width==cube.getWidth() && this->height==cube.getHeight())
        {
            return true;
        }
        else return false;
    }
private:
    int length;
    int width;
    int height;
};

//全局函数判断两个立方体是否相等
bool CompareCube(const Cube &cube1,const Cube &cube2)
{
    bool b=cube1.getHeight()==cube2.getHeight() && cube1.getLength()==cube2.getLength() && cube1.getWidth()==cube2.getWidth();
    return b;
}


void test101()
{
    Cube c1;
    c1.setWidth(10);
    c1.setLength(1);
    c1.setHeight(5);
    Cube c2;
    c2.setLength(20);
    c2.setLength(10);
    c2.setHeight(5);
    bool b=CompareCube(c1,c2);
    if(b){
        cout<<"\b两个立方体相等"<<endl;
    }else {
        cout<<"\b两个立方体不相等"<<endl;
    }

    bool bb=c1.compareCube(c2);
    if(bb){
        cout<<"\b两个立方体相等"<<endl;
    }else {
        cout<<"\b两个立方体不相等"<<endl;
    }
}

int main01() {
    Cube cube;
    cube.setHeight(10);
    cube.setLength(10);
    cube.setWidth(10);
    cube.getCubeSpace();
    cube.getCubeVolume();
    test101();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}