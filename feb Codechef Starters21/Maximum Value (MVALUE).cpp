#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll num;
		cin>>num;
		
		ll a[num];
		vector<ll> n;
		vector<ll> p;
		for(ll i=0;i<num;i++)
		{
			cin>>a[i];
			if(a[i]>=0)
				p.push_back(a[i]);
			else
				n.push_back(a[i]);
		}
		sort(a,a+num);
		sort(p.begin(), p.end(), greater<int>()); 
		sort(n.begin(),n.end());
		
		ll resp=0,resn=0,resz=0;
//		cout<<p.size()<<endl;
		if(p.size()>=2)
		{
			ll px = (p[0]);
//			cout<<"X:"<<x<<endl;
			ll py = (p[1]);
//			cout<<"y:"<<y<<endl;
			ll resp = (px*py) + max(px-py,py-px);
		}
		else if(n.size()>=2)
		{
			ll nx = abs(n[0]);
//			cout<<"X:"<<x<<endl;
			ll ny = abs(n[1]);
//			cout<<"y:"<<y<<endl;
			ll resn = (nx*ny) + max(nx-ny,ny-nx);
		}
		else if(n.size()==1 && p.size()==1)
		{
			ll zx = a[0];
//			cout<<"X:"<<x<<endl;
			ll zy = a[1];
//			cout<<"y:"<<y<<endl;
			ll resz = (zx*zy) + max(zx-zy,zy-zx);
		}
		
		
		cout<<max(max(resn,resp),resz)<<endl;
	}
	return 0;
}
