337. House Robber III
https://leetcode.com/problems/house-robber-iii/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> func(TreeNode* node,int& rob,int& skip)
    {
        if(node==NULL) return {0,0};

        vector<int> l = func(node->left,rob,skip);
        vector<int> r = func(node->right,rob,skip);

        // when you are taking that parent node...
        rob = node->val + l[1] + r[1];

        // when you are skipping that parent node...
        int s1 = max(l[0]+r[0],l[1]+r[1]);
        int s2 = max(l[1]+r[0],l[0]+r[1]);
        skip = max(s1,s2);

        return {rob,skip};
    }

    int rob(TreeNode* root) {
        int rob=0,skip=0;
        func(root,rob,skip);
        return max(rob,skip);
    }
};

