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
pair<int,int> diameter(TreeNode* root)
{
    if(root==NULL)
    {
        pair<int,int>p;
        p.first=0;
        p.second=0;
        return p;
    }
    pair<int,int>dleft=diameter(root->left);
    pair<int,int>dright=diameter(root->right);
    int lheight=dleft.first;
    int rheight=dright.first;
    int ld=dleft.second;
    int rd=dright.second;
    pair<int,int>ans;
    ans.first=1+max(lheight,rheight);
    ans.second=max(lheight+rheight,max(ld,rd));
    return ans;
}
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        pair<int,int>p=diameter(root);
        return p.second;
    }
};