class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> temp;
        for(int i = 0;i < nums.size();i++)
        {
            if(nums[i] != 0)
            {
                temp.push_back(nums[i]);
            }
        }
        int remainingElements = nums.size() - temp.size();
        for(int j = 0;j < remainingElements;j++)
        {
            temp.push_back(0);
        }
        nums = temp;
    }
};