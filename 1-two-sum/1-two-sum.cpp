class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++) {
            if(mp.count(target-nums[i])) // if target - nums[i] value found in map
                return {i,mp[target-nums[i]]};
            else
                mp[nums[i]]=i; 
        }
        return {};
    } 
    
};