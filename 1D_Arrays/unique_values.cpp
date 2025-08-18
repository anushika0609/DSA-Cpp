#include<iostream>
using namespace std;
int main(){
    int sz = 5;
    int arr[sz];

    cout<<"Enter array elements : "<<endl;
    for(int i =0; i<sz; i++){
        cin>>arr[i];
    }

    cout<<"The array is : "<<endl;
    for(int i=0; i<sz; i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    cout<<"Unique values in the array are ";

    
    for(int i=0; i<sz; i++){
        bool isDiff = true;
            for(int j =0; j<sz; j++){
                if(i!=j && arr[i]==arr[j]){
                    isDiff = false;
                    break;
                }
            }

        if(isDiff){
            cout<<arr[i]<<" ";
        }
    }
    
    return 0;
}