#include<iostream>
using namespace std;
int main(){
    int side1, side2,side3;
    cout<<"Enter side 1 : \n";
    cin>>side1;

    cout<<"Enter side 2 : \n";
    cin>>side2;

    cout<<"Enter side 3 : \n";
    cin>>side3;

    if(side1==side2 && side2==side3){
        cout<<"It is an equilateral triangle.";
    }
    else if(side1==side2 || side2==side3 ||side1==side3){
        cout<<"It is an isoceles triangle.";
    }
    else{
        cout<<"It is a scalene triangle.";
    }
    return 0;
}