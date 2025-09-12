#include<iostream>
using namespace std;
int main(){

    int sz = 5;
    int nums[sz];

    cout<<"Enter array elements : ";
    for(int i=0; i<sz; i++){
        cin>>nums[i];
    }
    
  
    int min_index  = 0;
    int max_index = 0;

    for(int i=0; i<sz; i++){
        if(nums[i]<nums[min_index]){
             min_index = i;
         }
        
         if(nums[i]>nums[max_index]){
             max_index = i;
         }
    }
     cout<<"The index of smallest number of an array is "<<min_index<<endl;
     cout<<"The index of largest number of an array is "<<max_index;
    return 0;
}