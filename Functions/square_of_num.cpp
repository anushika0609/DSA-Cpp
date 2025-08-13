#include<iostream>
using namespace std;
 int square(int num){
    int sq = num*num;
    return sq;
 }

 int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;

    int sq = square(num);
    cout<<"Square of "<<num<<" is "<<sq;

    return 0;
 }