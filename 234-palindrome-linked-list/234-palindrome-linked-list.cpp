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
    bool isPalindrome(ListNode* head) {
        if(head==NULL)
        {
            return true;
        }
        ListNode* fast=head;
        ListNode* temp=head;
        ListNode* slow=head;
        int count=0;
        while(temp!=NULL)
        {
            temp=temp->next;
            ++count;
        }
        if(count==1)
        {
            return true;
        }
        if(count==2)
        {
            if(head->val==head->next->val)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        while(fast!=NULL&&fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
         ListNode* head2=NULL;
        if(count%2!=0)
        {
            head2=slow->next;
        }
        else
        {
            head2=slow;
        }
        ListNode* dummy=NULL;
        ListNode* next=NULL;
        while(head2!=NULL)
        {
            next=head2->next;
            head2->next=dummy;
            dummy=head2;
            head2=next;
        }
        temp=head;
        while(dummy!=NULL)
        {
            if(dummy->val!=temp->val)
            {
                return false;
            }
            dummy=dummy->next;
            temp=temp->next;
        }
        return true;
        
    }
};