class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>finans;
        stack<int>mstk;
        mstk.push(prices[prices.size()-1]);
        finans.push_back(prices[prices.size()-1]);
        for(int i=prices.size()-2;i>=0;i--)
        {
            if(prices[i]<mstk.top())
            {
                while(!mstk.empty()&&mstk.top()>prices[i])
                {
                    mstk.pop();
                }
                if(mstk.size()==0)
                {
                    finans.push_back(prices[i]);
                }
                else
                {
                    finans.push_back(prices[i]-mstk.top());
                }
            }
            else if(prices[i]>=mstk.top())
            {
                finans.push_back(prices[i]-mstk.top());
            }
            mstk.push(prices[i]);
        }
        reverse(finans.begin(),finans.end());
        return finans;
    }
};