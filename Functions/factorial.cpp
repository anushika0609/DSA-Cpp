#include<iostream>
using namespace std;
int factorial(int num){
    int fact =1;
    for(int i=1; i<=num; i++){
        fact*=i;
    }
    return fact;
}

int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;

    int Factorial = factorial(num);
    cout<<"Factorial of "<<num<<" is "<<Factorial;
}