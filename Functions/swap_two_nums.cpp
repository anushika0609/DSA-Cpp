#include<iostream>
using namespace std;
void swap_num(int &num1, int &num2){
   int temp = num1;
   num1 = num2;
   num2 = temp;

}

int main(){
    int a, b;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    cout<<"First number : "<<a<<" and second number : "<<b<<endl;
    swap_num(a,b);
    cout<<"First number : "<<a<<" and second number : "<<b<<endl;
}