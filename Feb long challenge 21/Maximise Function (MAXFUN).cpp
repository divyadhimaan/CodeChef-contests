#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		vector<ll> v;
		ll a;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			v.push_back(a);
		}
		
		sort(v.begin(),v.end());
		
		ll ans = abs(v[0] - v[n-1]) + abs(v[n-1] - v[n/2]) + abs(v[n/2] - v[0]);
		cout<<ans<<endl;
	}
}
