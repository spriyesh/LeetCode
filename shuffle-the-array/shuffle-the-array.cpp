class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>finans;
        int i=0;
        int j=n;
        while(i<n&&j<nums.size())
        {
            finans.push_back(nums[i]);
            finans.push_back(nums[j]);
            j++;
            i++;
        }
        while(i<n)
        {
            finans.push_back(nums[i]);
            i++;
        }
        while(j<nums.size())
        {
            finans.push_back(nums[j]);
            j++;
        }
        return finans;
    }
};