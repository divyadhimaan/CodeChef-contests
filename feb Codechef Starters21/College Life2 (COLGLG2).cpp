#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll s;
		cin>>s;
		
		ll q[s];
		for(ll i=0;i<s;i++)
		{
			cin>>q[i];
		}
		ll total =0;
		for(ll i=0;i<s;i++)
		{
			ll n,L[i];
			cin>>n;
			ll sum = 0;
			for(ll j=0;j<n;j++)
			{
				cin>>L[i];
				if(j==0)
				{
					sum += L[i];
				}
				else
				{
					sum += L[i] - q[i];
				}
			}
			total += sum;
		}
		cout<<total<<endl;
	}
	return 0;
}
