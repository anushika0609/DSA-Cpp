#include<iostream>
using namespace std;
int digit_num(int num){
    if(num == 0) return 1;
    if(num < 0) num = -num;
    int count = 0;
    while(num>0){
        num/=10;
        count++;
    }
    return count;
}
int main(){
    int a;
    cout<<"Enter number : ";
    cin>>a;

    cout<<"Number of digits are "<<digit_num(a);


return 0;
}