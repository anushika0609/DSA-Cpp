#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;

    if(num%2==0 && num>0){
        cout<<"Number is positive even.";
    }
    else if(num%2==0 && num<0){
        cout<<"Number is negative even.";
    }
    else if(num%2!=0 && num>0){
        cout<<"Number is positive odd.";
    }
    else if(num%2!=0 && num<0){
        cout<<"Number is negative odd.";
    }
    else{
        cout<<"Number is zero.";
    }
    return 0;
}
