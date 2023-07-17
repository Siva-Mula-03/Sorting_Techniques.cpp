#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void merge(vector<int>&nums,int low,int mid,int high)
{
   int i=low,j=mid+1,k=0;
   vector<int>temp(high-low+1);
   while(i<=mid && j<=high)
   {
    if(nums[i]<=nums[j])
    {
         temp[k++]=nums[i++];
    }
    else
    {
        temp[k++]=nums[j++];
    }
   }

   while(i<=mid)
   {
     temp[k++]=nums[i++];
   }
   while(j<=high)
   {
     temp[k++]=nums[j++];
   }
  
  for(int i=0;i<k;i++)
  {
    nums[i+low]=temp[i];
  }

}


void mergesort(vector<int>&nums,int low,int high)
{
    if(low>=high)
    {
        return ;
    }
    int mid=low+(high-low)/2;
    mergesort(nums,low,mid);
    mergesort(nums,mid+1,high);
    merge(nums,low,mid,high);
}


int main()
{
    vector<int>arr{12,22,32,45,87,56,43,23,98,13};
    int n=arr.size();
    mergesort(arr,0,n-1);
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}