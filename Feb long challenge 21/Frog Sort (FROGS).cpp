#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int w[n],pos[n]={0};
		for(int i=0;i<n;i++)
		{
			cin>>w[i];
			pos[w[i]]=i+1;
		}
		int l[5]={0};
		int x;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			l[w[i]]=x;
		} 
		
		
		int hit=0;
		for(int i=1;i<n;i++)
		{
//			cout<<"i: "<<i<<endl;
			while(pos[i]>=pos[i+1])
			{
				pos[i+1] += l[i+1];
//				cout<<"pos[i+1]: "<<pos[i+1]<<endl;
				hit++;
//				cout<<"hit++: "<<hit<<endl;
			}
		}
		cout<<hit<<endl;
	}
	return 0;
}
