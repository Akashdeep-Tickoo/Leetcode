//{ Driver Code Starts
//Initial Template for C++

// C program for implementation of Bubble sort
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

// swapping the elements
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


// } Driver Code Ends
//User function Template for C++
#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    void bubble(int arr[],int n,int i)
    {
        for(int p=0;p<n-i-1;++p)
        {
            if(arr[p]>arr[p+1])
            {
                swap(arr[p],arr[p+1]);
            }
        }
    }
    void bs(int arr[],int n,int i)
    {
        if(i==n)
        {
            return;
        }
        bubble(arr,n,i);
        bs(arr,n,i+1);
    }
    //Function to sort the array using bubble sort algorithm.
    void bubbleSort(int arr[], int n)
    {
        // Your code here
        bs(arr,n,0);
    }
};


//{ Driver Code Starts.

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
// Driver program to test above functions
int main()
{
    int arr[1000],n,T,i;
  
    scanf("%d",&T);
    
    while(T--){
        
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      
    Solution ob;  
      
    ob.bubbleSort(arr, n);
    printArray(arr, n);
    }
    return 0;;
}
// } Driver Code Ends