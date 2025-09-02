#include<iostream>
using namespace std;
int multiply(int arr[], int sz){
    int product =1;
    for(int i=0; i<sz; i++){
        product*=arr[i];
    }
    return product;
}

int main(){

    int sz = 5;
    int arr[sz];

    cout<<"Enter array elements : "<<endl;
    for(int i=0; i<sz; i++){
        cin>>arr[i];
    }

    int array_product = multiply(arr , sz);
    cout<<"Sum of the elements of array is "<<array_product;

    return 0;

}