#include<iostream>
using namespace std;
int main(){
    int sz = 5;
    int nums[sz];

    cout<<"Enter array elements : "<<endl;
    for(int i=0; i<sz; i++){
        cin>>nums[i];
    }

    cout<<endl;
    cout<<"Before swap the array is  : ";
    for(int i=0; i<sz ; i++){
        cout<<nums[i]<<" ";
    }

    
    cout<<endl;
   int min_index = 0;
   int max_index = 0;
   cout<<"After swap the array : "<<endl;
   for(int j=0; j<sz; j++){
        for(int i=0; i<sz; i++){
            if(nums[i]<nums[min_index]){
                min_index = i;
            }
        }
        for(int k=0; k<sz; k++){
            if(nums[k]>nums[max_index]){
                max_index = k;
            }
        }
    int temporary = nums[min_index];
    nums[min_index] = nums[max_index];
    nums[max_index] = temporary;

    cout<<nums[j]<<" ";
         
    }

        return 0;
}