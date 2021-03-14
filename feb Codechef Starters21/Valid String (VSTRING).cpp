#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void right_rotate_by_one(int arr[], int n)
{
/* Shift operation to the right */
	int temp = arr[n - 1];
	for (int i = n - 1; i > 0; i--)
	arr[i] = arr[i - 1];
	arr[0] = temp;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,c;
		cin>>n>>c;
		
		string s;
		cin>>s;
		int l = s.length();
		int a[l];
		for(int i=0;i<l;i++)
		{
			if(s[i]=='1')
				a[i]=1;
			else
				a[i]=0;
		}
		vector<int> v;
		int count=0,max=0;
		for(int i=0;i<n;i++)
		{
			count=0;
			for(int j=0;j<n;j++)
			{
				while(a[j]==1)
				{
					if(a[j+1]==0)
					{
						count++;
					}
					else
					{
						if(count>max)
							max = count;
					}
					j++;
				}
			}
			right_rotate_by_one(a,l);
				
				
			if(max <= c)
				v.push_back(1);
		}
		if(v[0]==1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}

