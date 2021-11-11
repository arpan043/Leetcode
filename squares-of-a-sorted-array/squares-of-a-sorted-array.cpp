class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> output;
        for(int i =0 ;i < nums.size();i++)
        {
            int temp = nums[i]*nums[i];
            output.push_back(temp);
        }
        sort(output.begin(),output.end());
        return output;
    }
};