class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>finans;
        for(int i=0;i<nums.size();i++)
        {
            finans.push_back(nums[i]);
        }
        for(int i=0;i<nums.size();i++)
        {
            finans.push_back(nums[i]);
        }
        return finans;
    }
};