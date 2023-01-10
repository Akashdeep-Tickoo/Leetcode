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
    int finddia(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        return 1+max(finddia(root->left),finddia(root->right));
    }
    void diameter(TreeNode* root,int& x)
    {
        if(root==NULL)
        {
            return;
        }
        int left=finddia(root->left);
        int right=finddia(root->right);
        x=max(max(left+right,x),max(left,right));
        diameter(root->left,x);
        diameter(root->right,x);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int x=0;
        diameter(root,x);
        return x;
    }
};