//Using unordered map

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int> mapp;
       int size = nums.size();
       for(int i = 0;i <size; i++){
           int complement = target - nums[i];
           if(mapp.count(complement)){
               return {mapp[complement],i};
           }
           mapp[nums[i]] = i;
       }
       return {};
    }
     
};
