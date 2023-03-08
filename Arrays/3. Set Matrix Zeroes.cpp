3. Set Matrix Zeroes
https://leetcode.com/problems/set-matrix-zeroes/

class Solution {
public:
    void func(vector<vector<int>>& matrix)
    {
        vector<vector<int>> ans = matrix;
        int r=matrix.size();
        int c=matrix[0].size();
        for(int i=0;i<r;++i)
        {
            int sum = 0;
            for(int j=0;j<c;++j)
            {
                if(ans[i][j]==0)
                {
                    sum=1;
                    break;
                }
            }
            if(sum==1)
            {
                for(int j=0;j<c;++j) matrix[i][j]=0;
            }
        }
        
        for(int i=0;i<c;++i)
        {
            int s=0;
            for(int j=0;j<r;++j)
            {
                if(ans[j][i]==0)
                {
                    s=1;
                    break;
                }
            }
            if(s==1)
            {
                for(int j=0;j<r;++j) matrix[j][i]=0;
            }
        }
        
    }
    
    void setZeroes(vector<vector<int>>& matrix) {
        func(matrix);
    }
};

/************************************************************************/
