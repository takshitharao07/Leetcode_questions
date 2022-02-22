#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool containsDuplicate(vector<int>& nums){
    sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
                if(nums[i-1]==nums[i]){
                    return true;
                }
        }
        return false;
}
int main(){
    vector<int> num;
    for(int i=0;i<num.size();i++){
        cin>>num[i];
    }
    if(containsDuplicate(num)==0){
        cout<<"true";
    }
    else cout<<"false";
}