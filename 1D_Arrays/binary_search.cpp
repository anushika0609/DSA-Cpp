#include<iostream>
using namespace std;
int search(int arr[], int sz, int target){
    int start = 0;
    int end = sz-1;
    while(start<=end){
        int mid = (start+end)/2;
        if(target == arr[mid]){
            return mid;
        }
        else if(target<arr[mid]){
            end = mid-1;
        }
        else if(target>arr[mid]){
            start = mid+1;
        }
    }
    return -1;
}

int main(){
    int sz = 7;
    int arr[] = {-1, 0, 3, 4, 5, 9, 12};
    int target = 2;
    cout<<search(arr, sz, target)<<endl;


    return 0;
}