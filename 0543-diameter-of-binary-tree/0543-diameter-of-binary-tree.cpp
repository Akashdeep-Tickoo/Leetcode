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
int diameter(TreeNode* root)
{
    if(root==NULL)
    {
        return 0;
    }
    return 1+max(diameter(root->left),diameter(root->right));
}
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        int ldiameter=diameter(root->left);
        int rdiameter=diameter(root->right);
        return max(ldiameter+rdiameter,max(diameterOfBinaryTree(root->left),diameterOfBinaryTree(root->right)));
    }
};