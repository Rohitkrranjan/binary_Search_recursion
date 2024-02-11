#include<bits/stdc++.h>
using namespace std;

bool binarySearch(int *arr , int s,int e,int target )
{
		int mid = s+(e-s)/2;
	
	// base case
	 // if element not found
	 if(s>e)
	  return false;
	// if element found
	 if(arr[mid] == target)
	  return true;
	if(arr[mid] < target)
	 return binarySearch(arr,mid+1,e,target);
	else
	 return binarySearch(arr,s,mid-1,target);
}

int main(){
	int n;
	cin>>n;
	int key;
	cin>>key;
	
	int *arr = new int[n];
	
	 // input in array
	  for(int i=0;i<n;i++)
	  cin>>arr[i];
	bool ans = binarySearch(arr,0,n-1,key);
	if(ans)
	 cout<<"element is present";
	else
	cout<<"element is not preset";
}
