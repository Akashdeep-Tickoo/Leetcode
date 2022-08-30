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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL&&list2==NULL)
        {
            return NULL;
        }
        else if(list1==NULL)
        {
            return list2;
        }
        else if(list2==NULL)
        {
            return list1;
        }
        ListNode* Fhead=NULL;
        ListNode* Ftail=NULL;
        while(list1!=NULL&&list2!=NULL)
        {
            if(list1->val<list2->val)
            {
                if(Fhead==NULL)
                {
                    Fhead=list1;
                    Ftail=list1;
                }
                else
                {
                    Ftail->next=list1;
                    Ftail=list1;
                }
                list1=list1->next;
            }
            else
            {
                if(Fhead==NULL)
                {
                    Fhead=list2;
                    Ftail=list2;
                }
                else
                {
                    Ftail->next=list2;
                    Ftail=list2;
                }
                list2=list2->next;
            }
        }
        if(list1!=NULL)
        {
            Ftail->next=list1;
        }
        else if(list2!=NULL)
        {
            Ftail->next=list2;
        }
        return Fhead;
    }
};