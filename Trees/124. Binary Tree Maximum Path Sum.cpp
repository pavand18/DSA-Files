124. Binary Tree Maximum Path Sum
https://leetcode.com/problems/binary-tree-maximum-path-sum/

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
    int nodesum(TreeNode* node,int& ans)
    {
        if(node==NULL) return 0;
        int ls = nodesum(node->left,ans);
        if(ls<0) ls=0;
        int rs = nodesum(node->right,ans);
        if(rs<0) rs=0;
        ans = max(ans,ls+rs+node->val);
        return max(ls,rs) + node->val;
    }

    int maxPathSum(TreeNode* root) {
        int ans=root->val;
        nodesum(root,ans);
        return ans;
    }
};

