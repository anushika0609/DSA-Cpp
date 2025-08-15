#include<iostream>
using namespace std;
int add(int a, int b){
    int sum = a+b;
    return sum;
}

int main(){
    int a,b;

    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;

    int sum = add(a,b);

    cout<<"Sum is : "<<sum;

    return 0;
}