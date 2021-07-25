class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int>finans;
        
        for(int i=0;i<nums.size();i++)
        {
            int ans=nums[nums[i]];
            finans.push_back(ans);
        }
        return finans;
    }
};