#include<iostream>
#include<vector>
using namespace std;

char linear_search(vector<int>& nums, int target){
bool found = false;
    for(int value : nums){
        if(value == target){
            found = true;
             target=value;
            cout<<target<<" is available";
            break;
        }  
        

        else if(found){
            cout<<" not available";
            break;
         } 
        
    }
    
   
}
int main(){
    vector<int>nums = {1,3,5,8,3,8};
    int target = 9;
    linear_search(nums,target);
}