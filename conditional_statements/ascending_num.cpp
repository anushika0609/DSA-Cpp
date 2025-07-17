#include<iostream>
using namespace std;
int main(){
    int num1, num2, num3;
    cout<<"Enter number 1 : ";
    cin>>num1;
cout<<endl;
    cout<<"Enter number 2 : ";
    cin>>num2;
cout<<endl;
    cout<<"Enter number 3 : ";
    cin>>num3;
cout<<endl;
    if(num1<num2 && num1<num3){
        if(num2<num3){
        cout<<"Order : "<<num1 <<" , "<< num2 <<" , "<< num3;
        }
        else{
            cout<<"Order : "<<num1  <<" , " << num3 <<" , "<< num2;
        }
    }
    else if(num2<num1 && num2<num3 ){
        if(num1<num3){
            cout<<"Order : "<<num2 <<" , "<< num1 <<" , "<< num3;
        }
        else{
            cout<<"Order : "<<num2 <<" , "<< num3 <<" , "<< num1;
        }
    }
    else if(num3<num1 && num3<num2){
        if(num1<num2){
            cout<<"Order : "<<num3 <<" , "<< num1 <<" , "<< num2;
        }
        else{
            cout<<"Order : "<<num3 <<" , "<< num2 <<" , "<< num1;
        }
    }
    else{
        cout<<"Numbers are equal.";
    }
    return 0;
}