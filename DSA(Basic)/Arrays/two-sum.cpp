class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<int> ans{0,0};
       int size = nums.size();
       for(int i = 0;i<size;i++){
           for(int j =i+1;j<size;j++)
           {
               if(nums[i]  + nums[j] == target)
                   {
                      ans[0]=i;
                      ans[1]=j;
                      
                   }
                   
           }
            
       }
        return ans;
    }
     
};
