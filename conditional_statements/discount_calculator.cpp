#include<iostream>
using namespace std;
int main(){
    float amount;
    cout<<"Enter purchase amount : ";
    cin>>amount;
    cout<<endl;

    float discount1=amount*(1.0/10);
    float discount2=amount*(1.0/5);
    if(amount>=5000){
        if(amount>=5000 && amount<=10000){
            cout<<"Discounted amount : "<<(amount-discount1);
        }
        else{
            cout<<"Discounted amount : "<<amount-discount2;
        }
    }
    else{
        cout<<"No discount.";
    }
    cout<<endl;
    return 0;
}