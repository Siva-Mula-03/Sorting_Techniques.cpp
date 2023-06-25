#include<bits/stdc++.h>
using namespace std;

 void insertion_sort(int arr[],int n)
 {
     
     int min=arr[0];
     int loc=0;
     for(int i=1;i<n;i++)
     {
         if(arr[i]<min)
         {
             min=arr[i];
             loc=i;
         }
     }
     
     arr[loc]=arr[0];
     arr[0]=min;
     
     for(int i=2;i<n;i++)
     {
         int x=arr[i];
         int j=i;
         while(x<arr[j-1])
         {
             arr[j]=arr[j-1];
             j--;
         }
         
         arr[j]=x;
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
    
    insertion_sort(arr,n);
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    }
}
