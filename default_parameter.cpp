#include<iostream>

using namespace std;

void calculateArea(int l = 5, int b = 4);

int main(){
calculateArea();
int l,b;
cout<< "enter length : "<<endl;
cin >> l ;
cout<< "enter breadth : "<<endl;
cin >> b ;

calculateArea(l,b);
}

void calculateArea(int l,int b){
int area = l*b;

cout << "Area = "<<area <<endl;
}
