1. Next Permutation 
https://leetcode.com/problems/next-permutation/ 

class Solution {
public:
    vector<int> func(vector<int>& nums)
    {
        int a = -1;
        int b = -1;
        int sz = nums.size();
        for(int i=sz-2;i>=0;--i)
        {
            if(nums[i]<nums[i+1])
            {
                a=i;
                break;
            }
        }
        // cout<<a<<" "<<b<<endl;

        if(a==-1) 
        {
            sort(nums.begin(),nums.end());
            return nums;
        }
        for(int i=sz-1;i>=0;--i)
        {
            if(nums[i]>nums[a])
            {
                b=i;
                break;
            }
        }
        // cout<<a<<" "<<b<<endl;
        swap(nums[a],nums[b]);
        // reverse(nums.begin()+a+1,nums.end());
        reverse(nums.begin()+a+1,nums.end());
        return nums;
    }
    
    void nextPermutation(vector<int>& nums) {
        func(nums);
    }
};

>>>>>>> Approach 2 <<<<<<< 
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // in-built function...
        next_permutation(nums.begin(),nums.end());
    }
};

>>>>>>> Approach 3 <<<<<<< 
-> find all possible permutations using recursion
-> store them in array in sorted order.
-> return just next permutation of given array.


