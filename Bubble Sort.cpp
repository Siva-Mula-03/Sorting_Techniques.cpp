#include<bits/stdc++.h>
using namespace std;
//Bubble Sort
void bubble_sort(int arr[],int n)
{
    int sorted;
    for(int i=0;i<n-1 && sorted==0;i++)
    {
        sorted=1;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                sorted=0;
            }
        }
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
    
    bubble_sort(arr,n);
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    }
}
