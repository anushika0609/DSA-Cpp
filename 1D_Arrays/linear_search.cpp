#include<iostream>
#include<vector>
using namespace std;
void Search(vector<int> &nums, int target){
    bool found = false;
    for(int value : nums){
        if(target == value){
            found = true;
        }
    }
    if(found == true){
        cout<<target<<" is available"<<endl;
    }
    else{
        cout<<target<<" is not available"<<endl;
    }
}
int main(){
    vector<int>nums = {1,3,5,8,3,8};
    int target = 9;
    Search(nums,target);
}
