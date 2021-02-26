#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	long long int a[95];
	a[0] = 1;
	a[1] = 2;
	a[2] = 3;
	long long int x = a[0], y = a[1], z = a[2];
	for(int i=3;i<95;i++)
	{
		a[i] = x + z;
		x = a[i-2];
		y = a[i-1];
		z = a[i];
	}
//	for(int i=0;i<95;i++)
//	{
//		cout<<a[i]<<endl;
//	}
	while(t--)
	{
		long long int n;
		cin>>n;
		cout<<a[n-1]<<endl;
	}
	return 0;
}
