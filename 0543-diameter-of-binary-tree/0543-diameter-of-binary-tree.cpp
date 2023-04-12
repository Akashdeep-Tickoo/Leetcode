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
    pair<int,int> dia(TreeNode* root)
    {
        if(root==NULL)
        {
            pair<int,int>ans(0,0);
            return ans;
        }
                    pair<int,int>ans;
        
                    pair<int,int>left=dia(root->left);
                    pair<int,int>right=dia(root->right);
        
        ans.first=max(left.first,right.first)+1;
        ans.second=max(left.first+right.first,max(left.second,right.second));
        return ans;
        
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        
        pair<int,int>ans=dia(root);
        return ans.second;
        
    }
};