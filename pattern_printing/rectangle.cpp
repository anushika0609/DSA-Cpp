#include<iostream>
using namespace std;
int main(){
    int i,j,k,l;
    cout<<"Enter number of rows :";
    cin>>i;
    cout<<endl;
    cout<<"Enter number of columns :";
    cin>>j;
    cout<<endl;
    for(l=1;l<=i;l++){
        for(k=1;k<=j;k++){
        printf("* ");
        }
        cout<<endl;
    }
   
    return 0;
}