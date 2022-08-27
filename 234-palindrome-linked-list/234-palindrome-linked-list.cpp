/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
        ListNode* reversell(ListNode* head)
    {
        ListNode* badhar=NULL;
        ListNode* next=NULL;
        while(head!=NULL)
        {
            next=head->next;
            head->next=badhar;
            badhar=head;
            head=next;
        }
        return badhar;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL||head->next==NULL)
        {
            return true;
        }
        else
        {
            ListNode* fast=head;
            ListNode* slow=head;
            while(fast->next!=NULL&&fast->next->next!=NULL)
            {
                slow=slow->next;
                fast=fast->next->next;
            }
            slow->next=reversell(slow->next);
            slow=slow->next;
            while(slow!=NULL)
            {
                if(slow->val!=head->val)
                {
                    return false;
                }
                slow=slow->next;
                head=head->next;
            }
            return true;
        }
    }
};