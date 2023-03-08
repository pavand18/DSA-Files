2.Sort Colors
https://leetcode.com/problems/sort-colors/ 

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int a0=0,a1=0,a2=0;
        for(auto it:nums)
        {
            if(it==0) ++a0;
            if(it==1) ++a1;
            if(it==2) ++a2;
        }
        for(int i=0;i<a0;++i)
        {
            nums[i]=0;
        }
        for(int i=a0;i<a0+a1;++i)
        {
            nums[i]=1;
        }
        for(int i=a0+a1;i<a0+a1+a2;++i)
        {
            nums[i]=2;
        }
    }
};

/************************************************************************/