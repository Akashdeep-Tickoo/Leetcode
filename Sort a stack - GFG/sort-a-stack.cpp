//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}
// } Driver Code Ends


/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void correctpos(stack<int>& s,int last)
{
    if(s.empty()||s.top()<=last)
    {
        s.push(last);
        return;
    }
    int temp=s.top();
    s.pop();
    correctpos(s,last);
    s.push(temp);
}
void sorthelper(stack<int>& s)
{
    if(s.size()==1)
    {
        return;
    }
    int last=s.top();
    s.pop();
    sorthelper(s);
    correctpos(s,last);
}
void SortedStack :: sort()
{
   //Your code here
  sorthelper(s);
}