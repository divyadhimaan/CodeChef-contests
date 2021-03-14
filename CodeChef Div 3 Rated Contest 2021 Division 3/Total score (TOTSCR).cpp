#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		
		int A[k];
		for(int i=0;i<k;i++)
		{
			cin>>A[i];
		}
		
		
		for(int i=0;i<n;i++)
		{
			long long int totalScore = 0;
			string s;
			cin>>s;
			
			for(int j=0;j<k;j++)
			{
				if(s[j]=='1')
					totalScore += A[j];
			}
			
			cout<<totalScore<<endl;
		}
	}
	return 0;
}
