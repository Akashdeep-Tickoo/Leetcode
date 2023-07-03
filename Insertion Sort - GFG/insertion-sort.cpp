//{ Driver Code Starts
// C program for insertion sort
#include <stdio.h>
#include <math.h>

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
    void insertion(int arr[], int n,int i)
    {
        int x=arr[i];
        int j=i-1;
        while(j>=0)
        {
            if(arr[j]<x)
            {
                break;
            }
            --j;
        }
        j=j+1;
        for(int x=i;x>=j;x=x-1)
        {
            arr[x]=arr[x-1];
        }
        arr[j]=x;
    }
     public:
     void is(int arr[],int n,int i)
     {
         if(i==n)
         {
             return;
         }
         insertion(arr,n,i);
         is(arr,n,i+1);
     }
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        //code here
        is(arr,n,1);
    }
};

//{ Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;

    scanf("%d",&T);

    while(T--){

    scanf("%d",&n);

    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.insertionSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}

// } Driver Code Ends