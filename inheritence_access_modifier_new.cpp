#include<iostream>
using namespace std;

//Public Access Modifier
/*
class Base{
public:
    void print(){
    cout << "hello" << endl;
    }

};

class Derived : public Base{
public:
    void print2(){
    cout << "hello2" << endl;
    }
};

int main(){
    Derived d1;
d1.print();

}
*/

//Public
/*
class A{
private:
    int x = 5;

protected:
    int y = 10;

public:
    int z = 15;

};

class B : public A{


};

int main(){
B b1;
cout << b1.x << endl;
}
*/

//Private
/*
class A{
private:
    int x = 5;

protected:
    int y = 10;

public:
    int z = 15;

};

class B : private A{


};

int main(){
B b1;
cout << b1.y << endl;
}

*/


//Protected

class A{
private:
    int x = 5;

protected:
    int y = 10;

public:
    int z = 15;

};

class B : protected A{


};

int main(){
B b1;
cout << b1.x << endl;
}



