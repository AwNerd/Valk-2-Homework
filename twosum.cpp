#include <bits/stdc++.h>
#include <vector>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int temp[n];
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
           temp[i]=nums[i];
        }
        sort(nums.begin(),nums.end());
        int l=0,r=nums.size()-1;
        while(nums[r] + nums[l] != target ){
            if(nums[r] + nums[l] > target){
                r--;
            }
            if(nums[r] + nums[l] < target){
                l++;
            }
        }
    
        for(int i = 0; i < n; i++){
            if(temp[i]==nums[l] || temp[i]==nums[r]){
                ans.push_back(i);
            }
        }
        
        return ans;
        }
};