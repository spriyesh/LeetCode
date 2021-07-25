class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>mymap;
        
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(mymap[nums[i]]>0)
            {
                count+=mymap[nums[i]];
            }
            mymap[nums[i]]++;
        }
        return count;
    }
};