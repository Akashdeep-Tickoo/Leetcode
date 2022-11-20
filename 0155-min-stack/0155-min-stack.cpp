#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int d)
    {
        data=d;
        next=NULL;
    }
};
class MinStack {
    Node* head;
    Node* shead;
    int size;
public:
    MinStack() {
        head=NULL;
        shead=NULL;
        size=0;
    }
    void push(int val) {
        Node* n=new Node(val);
        if(shead==NULL)
        {
            Node* p=new Node(val);
            p->next=shead;
            shead=p;
        }
        else if(shead!=NULL&&shead->data>=val)
        {
            Node* p=new Node(val);
            p->next=shead;
            shead=p;
        }
		n->next=head;
		head=n;
		++size;
    }
    
    void pop() {
		{
            if(head->data==shead->data)
            {
                shead=shead->next;
            }
			head=head->next;
			size--;
		}
    }
    
    int top() {
        if(head==NULL)
		{
			return -1;
		}
		else
		{
			return head->data;
		}
        
    }
    
    int getMin() {
        if(shead!=NULL)
        {
             return shead->data;
        }
        else return NULL;
    }
};







/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */