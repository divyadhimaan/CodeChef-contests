#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool sortbysec(const pair<ll,ll> &a, 
              const pair<ll,ll> &b) 
{ 
    return (a.second < b.second); 
} 

ll kitchen(ll n, ll e, ll h, vector<pair<ll,ll>> vec)
{
	ll count=0,price=0;
		for(ll i=0;i<=2;)
		{
			if(count==n)
				return price;
			if(vec[i].first==0)
			{
				if(e>=2)
				{
					ll egg = e/2;
					if(egg >n)
						egg = n;
					count += egg;
					price += egg * vec[i].second;
					e = e - (2*egg);
					i++;
				}
				else 
					return -1;
			}
			else if(vec[i].first==1)
			{
				if(h>=3)
				{
					ll cb = h/3;
					if(cb>n)
						cb = n;
					count += cb;
					price += cb * vec[i].second;
					h = h - (3*cb);
					i++;
				}
				else
					return -1;
			}
			else if(vec[i].first==2)
			{
				if(e>=1 && h>=1)
				{
					ll cake = e/1;
					if(cake>n)
						cake = n;
					count += cake;
					price += cake * vec[i].second;
					e = e - cake;
					h = h - cake;
					i++;
				}
				else 
				{
					return -1;
				}
			}
		}
		if(count<n)
			return -1;
		return price;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,e,h,a,b,c;
		cin>>n>>e>>h>>a>>b>>c;
		
		// omelette == 0 shake == 1 cake == 2
		//2 e for 0
		//3 h for 1
		//1 e and 1 h for 2
		
		vector<pair<ll,ll>> vec;
		vec.push_back(make_pair(0,a));
		vec.push_back(make_pair(1,b));
		vec.push_back(make_pair(2,c));
		sort(vec.begin(), vec.end(), sortbysec); 
		
		ll result = kitchen(n,e,h,vec);
		
		cout<<result<<endl;
		
	}
}
