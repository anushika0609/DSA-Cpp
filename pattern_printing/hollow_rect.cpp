#include<iostream>
using namespace std;
int main(){
    int n,m,i,j;
cout<<"Enter number of rows: "<<endl;
cin>>n;
cout<<"Enter number of columns: "<<endl;
cin>>m;

    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if( i == 1 || j == 1 || j == m || i == n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        
        }
        cout<<endl;
    }
    return 0;
}