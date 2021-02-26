#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		
		int count = 1,maxm=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]==s[i+1])
			{
				count++;
			}
			else
			{
				maxm = max(maxm,count);
				count=1;
			}
		}
		maxm = max(maxm,count);
		cout<<maxm<<endl;
	}
}
