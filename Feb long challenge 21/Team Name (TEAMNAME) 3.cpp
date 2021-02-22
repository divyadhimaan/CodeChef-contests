#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll fun(vector<char> u,vector<char> v)
{
	set<char> s(u.begin(),u.end());
	
	ll temp = 0;
	
	for(auto x:v)
	{
		if(s.find(x) != s.end())
		{
			temp++;
		}
	}
	return temp;
}


int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		
		map<string,vector<char> > m;
		
		string s;
		for(ll i=0;i<n;i++)
		{
			cin>>s;
			if(s.length()>0)
			{
				m[s.substr(1)].push_back(s[0]);
			}
		}
		
		ll ans = 0;
		for(auto i:m)
		{
			for(auto j:m)
			{
				if(i.first != j.first)
				{
					ll temp = fun(i.second,j.second);
					ans  += (i.second.size() - temp) * (j.second.size() - temp);
					
				}
			}
		}
		cout<<ans<<endl;
	}
}
