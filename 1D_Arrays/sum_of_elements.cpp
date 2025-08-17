#include<iostream>
using namespace std;

int add(int arr[] , int sz){
    int sum =0;
    for(int i=0; i<sz; i++){
         int next = arr[i];
         sum += next;
    }
    return sum;
}

int main(){
    int sz = 5;
    int arr[sz];

    cout<<"Enter array elements : "<<endl;
    for(int i=0; i<sz; i++){
        cin>>arr[i];
    }

    int array_sum = add(arr , sz);
    cout<<"Sum of the elements of array is "<<array_sum;

    return 0;

}