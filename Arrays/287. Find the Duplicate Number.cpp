287. Find the Duplicate Number
https://leetcode.com/problems/find-the-duplicate-number/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> v = nums;
        int slow = v[0];
        int fast = v[0];
        
        do{
            slow = v[slow];
            fast = v[v[fast]];
        }while(slow!=fast);
        
        fast = v[0];
        while(fast!=slow)
        {
            fast = v[fast];
            slow = v[slow];
        }
        
        return slow;
        
    }
};
