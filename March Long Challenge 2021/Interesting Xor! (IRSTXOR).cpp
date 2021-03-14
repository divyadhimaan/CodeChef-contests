#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll C;
		cin>>C;
		
		ll d=1;
		do
		{
			d = d*2;
		}while(d<=C);
		
		ll A = (d/2)-1;
		ll B = C ^ A;
		
		cout<<A*B<<endl;
	}
}
