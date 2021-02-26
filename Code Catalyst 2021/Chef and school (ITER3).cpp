#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,k,m;
		cin>>n>>k>>m;
		
		long long int ta[n],tc[n];
		for(long long int i=0;i<n;i++)
		{
			cin>>ta[i];
		}
		for(long long int i=0;i<n;i++)
		{
			cin>>tc[i];
		}
		
		int wrong = 0;
		for(long long int i=0;i<n;i++)
		{
			if(abs(tc[i]-ta[i])>=k)
				wrong++;
		}
		int qualify = (wrong<=m)?1:0;
		cout<<qualify<<endl;
	}
}
