#include<iostream>
using namespace std;

class Student
{
public:
    int id;
    string name;
    string usn;

    void display()
    {
        cout<<"ID:" <<id<<endl;
        cout<<"Name:" <<name<<endl;
        cout<<"USN:" <<usn<<endl;
    }
};

int main()
{
    Student s1,s2,s3,s4; //creating a object
    s1.id=101;
    s1.name="Shrusti";
    s1.usn="01fe24bec401";
    s1.display();

    s2.id=108;
    s2.name="Seema";
    s2.usn="01fe24bec408";
    s2.display();


    s3.id=112;
    s3.name="Shravani";
    s3.usn="01fe24bec412";
    s3.display();


    s4.id=115;
    s4.name="Preeti";
    s4.usn="01fe24bec415";
    s4.display();

    return 0;

}
