#include<iostream>
using namespace std;
void palindrome(int num){
    int n =num;
    int reversed=0;
    while(num>0){
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    if(reversed==n) cout<<"Number is palindrome";
    else cout<<"Number is not palindrome";
}
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;

    palindrome(n);

    return 0;
}