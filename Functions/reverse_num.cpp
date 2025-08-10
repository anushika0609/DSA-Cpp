#include<iostream>
using namespace std;
int reverse_num(int num){
    int last_digit;
    int reverse =0 ;
    while(num >0){
        last_digit=num%10;
        reverse=(reverse*10)+last_digit;
        num/=10;
    }
    
return reverse;

}
int main(){
    int num;
    cout<<"Enter any number : ";
    cin>>num;

    cout<<reverse_num(num);

}