#include<iostream>
using namespace std;
void prime(int num){

    bool isprime=true;
    for(int i=2; i<=(num-1); i++){
        if(num%i==0){
            isprime=false;
        }
   }
   if(isprime==false){
    cout<<num<<" is not prime";
   }
   else{
    cout<<num<<" is prime";
   }
    
}

int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;

    prime(num);

    return 0;
}