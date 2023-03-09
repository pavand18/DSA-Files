543. Diameter of Binary Tree
https://leetcode.com/problems/diameter-of-binary-tree/

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
    int maxHeight(TreeNode* node,int& ans)
    {
        if(node==NULL) return 0;
        int lh = maxHeight(node->left,ans);
        int rh = maxHeight(node->right,ans);
        ans = max(ans,lh+rh);
        return max(lh,rh) + 1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        int ans=0;
        maxHeight(root,ans);
        return ans;
    }
};

