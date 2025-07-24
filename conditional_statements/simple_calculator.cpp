#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cout<<"Enter 1st number : ";
    cin>>num1;
    cout<<endl;
    cout<<"Enter 2nd number : ";
    cin>>num2;
    cout<<endl;
    char operation;
    cout<<"Enter operator : ";
    cin>>operation;
    cout<<endl;
    switch(operation){
    case '+':
    cout<<"Result : "<<num1+num2;
    break;

    case '-':
    cout<<"Result : "<<num1-num2;
    break;

    case '*':
    cout<<"Result : "<<num1*num2;
    break;

    case '/':
    cout<<"Result : "<<num1/num2;
    break;
    }
    return 0;
}