//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         int size=r-l+1;
         int brr[size];
         int i,j,k=0;
         i=l;
         j=m+1;
         while(i<=m&&j<=r)
         {
             if(arr[i]<=arr[j])
             {
               brr[k]=arr[i];
               ++i;
               ++k;
             }
             if(arr[j]<arr[i])
             {
                 brr[k]=arr[j];
                 ++k;
                 ++j;
             }
         }
         while(i<=m)
         {
             brr[k]=arr[i];
               ++i;
               ++k;
         }
         while(j<=r)
         {
            brr[k]=arr[j];
                ++k;
                ++j;
         }
         for(int p=0;p<size;++p)
         {
             arr[l+p]=brr[p];
         }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l>=r)
        {
            return;
        }
        int mid=(l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends