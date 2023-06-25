#include<bits/stdc++.h>
using namespace std;

//Selection Sort


void selection_sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=arr[i];
        int loc=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<min)
            {
                min=arr[j];
                loc=j;
            }
        }
        
        arr[loc]=arr[i];
        arr[i]=min;
    }
}

int main()
{
    int tc;
    cin>>tc;
    
    while(tc--)
    {
   int n;
   cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    selection_sort(arr,n);
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    }
}
