#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s1,s2;
		cin>>s1;
		cin>>s2;
		int count =0;
		
		int l1 = s1.length();
		int l2 = s2.length();
		
		int a1[26]={0};
		int a2[26]={0};
		for(int i=0;i<l1;i++)
		{
			a1[s1[i]-'a']=1;		
		}
		for(int i=0;i<l2;i++)
		{
			a2[s2[i]-'a']=1;
		}
		
		for(int i=0;i<26;i++)
		{
			if(a1[i]!=a2[i])
				count++;
		}
		cout<<count<<endl;
	}
}
