#include<iostream>
using namespace std;

class Base
{
private:
    int x;

public:
    void setData(int a)
    {
        x=a;
    }

    int getData()
    {
        return x;
    }
};

class derived : public Base
{
 public:
     void display()
     {
         cout << "Value: " << getData();
     }

};


int main()
{
    derived d1;
    d1.setData(23);
    d1.display();

}
