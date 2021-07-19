class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        stack<int>mstk;
        unordered_map<int,bool>mymap;
        vector<string>mans;
        for(int i=0;i<target.size();i++)
        {
            mymap[target[i]]=true;
        }
        for(int i=1;i<=target[target.size()-1];i++)
        {
            if(mymap.count(i)>0)
            {
                mans.push_back("Push");
            }
            else
            {
                mans.push_back("Push");
                mans.push_back("Pop");
            }
        }
        return mans;
    }
};