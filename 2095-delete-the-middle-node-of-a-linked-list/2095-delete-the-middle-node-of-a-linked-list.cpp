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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL)
        {
            return NULL;
        }
        else if(head->next==NULL)
        {
            return NULL;
        }
        ListNode* temp1=NULL;
        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* temp=head;
        while(fast!=NULL&&fast->next!=NULL)
        {
            temp1=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        temp1->next=temp1->next->next;
        return head;
        
    }
};