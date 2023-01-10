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
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int diameter(TreeNode* root,int& ans)
    {
        if(root==NULL)
        {
            return 0;
        }
        int left=diameter(root->left,ans);
        int right=diameter(root->right,ans);
        ans=max(max(left,right),max(ans,left+right));
        return 1+max(left,right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int ans=0;
        int x=diameter(root,ans);
        return ans;
    }
};