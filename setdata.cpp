#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int width;
public:
    void setData(int l, int w); //function declaration
    int area();
};

//use the scope resolution operator
void Rectangle::setData(int l, int w)
{
    length=l;
    width=w;
}

int  Rectangle::area()
{
    return length*width;
}

int main()
{
  Rectangle r1;
 r1.setData(23,12);
 cout << "Area: " << r1.area() << endl;
   return 0;

}
