#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n],temp[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        temp[i]=arr[i];
	    }
	    sort(temp,temp+n);
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            if(arr[i]==temp[j])
	                   arr[i]=j;
	        }
	    }
	    for(int i=0;i<n;i++)
	    {
	        cout<<arr[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
