class Solution {
public:
    
    string helper(string ans, string check)
    {
        int i=0;int j=0;
        string val="";
        while(i<ans.length()&&j<check.length())
        {
            if(ans[i]==check[j])
            {
                val+=ans[i];
            }
            else
            {
                break;
            }
            i++;
            j++;
        }
        return val;
    }
    
    
    
    
    string longestCommonPrefix(vector<string>& strs) {
        string ans=strs[0];
        
        for(int i=1;i<strs.size();i++)
        {
            ans=helper(ans,strs[i]);
        }
        return ans;
    }
};