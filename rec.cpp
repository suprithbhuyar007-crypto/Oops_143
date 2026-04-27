#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int width;

public:
    // function declarations
    void setData(int l, int w);
    int area();
};

// define member functions using scope resolution
void Rectangle::setData(int l, int w)
{
    length = l;
    width = w;
}

int Rectangle::area()
{
    return length * width;
}

int main()
{
    Rectangle rects[4];       // create object of class Rectangle

    // set values using public member function
    rects[0].setData(23, 12);
    rects[1].setData(2, 12);
    rects[2].setData(23, 2);
    rects[3].setData(2, 1);

    // compute and print area
    for(int i=0;i<4;i++)
    {
        cout << "Area " << i+1 << ":" << rects[i].area() << endl;
    }


    return 0;
}
