#include<iostream>
using namespace std;
int main(){
    int units;
    cout<<"Enter units : ";
    cin>>units;

    if(units<=100 && units>=0){
        cout<<"Electricity bill : "<<units*5<<" Rs";
    }
    else if(units>=101 && units<=300){
        cout<<"Electricity bill : "<<units*7<<"Rs";
    }
    else if(units>300){
        cout<<"Electricity bill : "<<units*10<<"Rs";
    }
    else{
        cout<<"Invalid input";
    }
    return 0;
}