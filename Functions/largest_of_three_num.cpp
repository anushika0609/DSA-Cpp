#include<iostream>
using namespace std;
int largest(int i, int j, int k ){
    int n = i;
    if(j>n){
        n =j;
    }
    else if(k>n){
        n = k;
    }
    
    return n;
}

int main(){
    int a,b,c;
    cout<<"Enter first num : ";
    cin>>a;

    cout<<"Enter second num : ";
    cin>>b;

    cout<<"Enter third num : ";
    cin>>c;

    cout<<"Largest number is "<<largest(a,b,c);

    return 0;
}