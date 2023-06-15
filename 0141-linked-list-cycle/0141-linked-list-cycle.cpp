/*
 * @lc app=leetcode id=141 lang=cpp
 *
 * [141] Linked List Cycle
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*,int>ourmap;
        ListNode* temp=head;
        bool ans=false;
        while(temp!=NULL)
        {
            if(ourmap.count(temp)!=0)
            {
                ans=true;
                return ans;
            }
            ourmap[temp]=0;
            temp=temp->next;
        }
        return ans;


    }
};
// @lc code=end

