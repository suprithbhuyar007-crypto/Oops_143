//using private access specifier

/*
#include <iostream>
using namespace std;

class Base{
private:
    int x;

public:
    void setData(int a){
        x = a;

    }
    int getData(){
    return x;
    }
};

class Derived : public Base{
public:
    void display(){
        cout << "Number = ";
        cout << getData();
    }
};

int main(){

Derived d1;
d1.setData(5);

d1.display();

return 0;
}
*/

//Using protected access specifier
/*
#include <iostream>
using namespace std;

class Base{
protected:
    int x;
};


class Derived : public Base{
public:
    void setData(int a){
        x = a;

    }

    void display(){
        cout << "Number = ";
        cout << x;
    }
};

int main(){

Derived d1;
d1.setData(5);

d1.display();

return 0;
}
*/

//Using friend class

#include <iostream>
using namespace std;

class Base{
private:
    int x;

public:
    Base(){
    x = 5;
    }

    friend class Derived;
};


class Derived {
public:


    void display(Base b){
        cout << "Number = ";
        cout << b.x;
    }
};

int main(){
Base b;
Derived d1;


d1.display(b);

return 0;
}
