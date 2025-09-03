#include<iostream>
using namespace std;
int main(){
    int sz = 5;
    int arr[sz] = {7,8,4,9,2};
    
    int start = 0;
    int end = sz-1;
   

    
        while(start<end){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
        
        for(int i =0; i<sz; i++){
            cout<<arr[i]<<" ";
        }

    return 0;
}