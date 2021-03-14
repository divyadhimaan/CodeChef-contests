#include<bits/stdc++.h>
using namespace std;



vector<int> solve(int arr[],int n)
{
	vector<int> v;
		for(int i=0;i<n;i++)
		{
			int time=1;
			for(int j=0;j<n;j++)
			{
				if(arr[j]==arr[i])
				{
					if(i>j)
						time++;
				}
				else if(arr[j]-arr[i]>0)
				{
					time++;
				}
				
			}
			v.push_back(time);
		}
		return v;
}
 
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		vector<int> arr = solve(a,n);
		
		for(int i=0;i<arr.size();i++)
		{
			cout<<arr[i]<<" ";
		}
		
	}
	
	return 0;
}
