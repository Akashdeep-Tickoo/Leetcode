// { Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <stdbool.h>


 // } Driver Code Ends
//User function Template for C

// Function to find majority element in the array
// a: input array
// size: size of input array
int majorityElement(int a[], int size)
{
        
    // your code here
    int arr[1000000]={0};
    for(int i=0;i<size;++i)
    {
        ++arr[a[i]];
    }
    int max=-1,index=-1;
     for(int i=0;i<1000000;++i)
    {
        if(arr[i]>max&&arr[i]>size/2)
        {
            max=arr[i];
            index=i;
        }
    }
    return index;
    
        
}

// { Driver Code Starts.

int main(){

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        
        for(int i = 0;i<n;i++){
            scanf("%d", &arr[i]);
        }
        printf("%d\n", majorityElement(arr, n));
    }

    return 0;
}
  // } Driver Code Ends