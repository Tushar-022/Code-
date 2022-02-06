#include<bits/stdc++.h>
using namespace std;

int PeakElement(int arr[],int low,int high,int n)
{ 
    int mid;
    mid=low+(high-low)/2;
    
    
        if((mid==0|| arr[mid-1]<=arr[mid]) && (mid==n-1 || arr[mid+1]<=arr[mid]))       
            return mid;

        else if(mid>0 && arr[mid-1]>arr[mid])   
            return  PeakElement(arr,low,(mid-1),n);

        else 
            return PeakElement(arr,(mid+1),high,n);
    
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   int s=PeakElement(arr,0,n-1,n);
   cout<<"One of the peak element in array is "<<s<<endl;
   return 0;
}