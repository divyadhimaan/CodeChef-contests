#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int flag = 0;
	    int a[n],p[n];
	    for(int i=0;i<n;i++)
	    {
	    	cin>>a[i];
	    	p[i]=i+1;
		}
		sort(a,a+n);
		int d=0;
		for(int i=0;i<n;i++)
		{
			if(p[i]-a[i]>=0)
				d += p[i] - a[i];
			else
				flag=1;
		}
		if(flag==1)
			cout<<"Second"<<endl;
		else if(d%2!=0)
			cout<<"First"<<endl;
		else
			cout<<"Second"<<endl;
	}
	return 0;
}
