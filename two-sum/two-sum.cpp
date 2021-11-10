class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      vector<int> output;
        
      for (int i = 0 ;i < nums.size();i++)
      {
          for(auto j = i+1 ;j < nums.size();j++)
          {
            int sum = nums[i] + nums[j];
            if(sum==target)
            {
                output.push_back(i);
                output.push_back(j);
                return output;
            }
          }
      }
    return output; 
    }
};