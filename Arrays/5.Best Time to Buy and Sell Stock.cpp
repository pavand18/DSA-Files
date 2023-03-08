5. Best Time to Buy and Sell Stock
https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        int sz = prices.size();
        vector<int> v = prices;
        vector<int> a(sz);
        vector<int> b(sz);
        for(int i=0;i<sz;++i)
        {
            mini = min(mini,v[i]);
            a[i] = mini;
        }
        for(int j=sz-2;j>=0;--j)
        {
            maxi = max(maxi,v[j+1]);
            b[j] = maxi;
        }
        
        int ans = 0;
        for(int i=0;i<sz-1;++i)
        {
            ans = max(ans,b[i]-a[i]);
        }
        // for(auto it:a) cout<<it<<" ";
        // cout<<endl;
        // for(auto it:b) cout<<it<<" ";
        // cout<<endl;
        return ans;
    }
};

/************************************************************************/


