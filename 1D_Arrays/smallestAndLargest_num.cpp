#include<iostream>
using namespace std;
int main(){
    int sz = 5;
    int nums[sz];

    cout<<"Enter array elements : ";
    for(int i=0; i<sz; i++){
        cin>>nums[i];
    }

    int small = INT8_MAX;   //MAX function == + infinity
    int large = INT8_MIN;

    for(int i=0; i<sz; i++){
        // if(nums[i]<small){
        //     small = nums[i];
        //  }
       
    small = min(nums[i],small);
    large = max(nums[i],large);

    }
   
    cout<<"Smallest number in the array is : "<<small<<endl;
    cout<<"Largest number in the array is : "<<large<<endl;
 
    return 0;
}