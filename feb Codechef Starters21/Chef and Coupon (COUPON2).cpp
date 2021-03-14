#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int d,c;
		cin>>d>>c;
		
		int a[3],b[3];
		int suma=0,sumb=0;
		for(int i=0;i<3;i++)
		{
			cin>>a[i];
			suma+=a[i];
		}
		for(int i=0;i<3;i++)
		{
			cin>>b[i];
			sumb+=b[i];
		}
		
		int sumc=0,sumd=0;
		if(suma>=150 && sumb>=150)
		{
			sumc=suma+sumb+c;
			sumd=suma+sumb+d+d;
		}
		else if(suma>=150 || sumb>=150)
		{
			sumc=suma+sumb+c+d;
			sumd=suma+sumb+d+d;
		}
		else
		{
			sumd=suma+sumb+d+d;
			sumc=1000;
		}
		
		
		if(sumc<sumd)
		{
			cout<<"YES"<<endl;
		}	
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
