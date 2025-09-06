#include<iostream>
using namespace std;
int main(){

    int sz;
    cout<<"Enter the size of array : ";
    cin>>sz;

    cout<<"Enter array elements : "<<endl;
    int nums[sz];
    for(int i =0; i<sz; i++){
        cin>>nums[i];
    }

    int count=0;
    for(int i =0; i<sz; i++){
        if(nums[i]%2==0){
            count++;
        }
    }

    int oddCount = sz-count;

    cout<<"Count of even numbers : "<<count<<endl;
    cout<<"Count of odd numbers : "<<oddCount;

}