4. Pascals Triangle
https://leetcode.com/problems/pascals-triangle/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        int n = numRows;
        vector<int> w;
        
        for(int i=1;i<=n;++i)
        {
            if(i==1) ans.push_back({1});
            else if(i==2) 
            {
                ans.push_back({1,1});
                w={1,1};
                cout<<w[0]<<" "<<w[1]<<endl;
            } 
            else
            {
                vector<int> v;
                for(int j=0;j<i;++j) //i=3
                {
                    if(j==0||j==i-1) v.push_back(1);
                    else v.push_back(w[j-1]+w[j]);
                }
                ans.push_back(v);
                w=v;
            }
        }
        return ans;
    }
};

/************************************************************************/
