#include<bits/stdc++.h>
#include <iostream> 
#include <vector> 
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		string s[n];
		for(int i=0;i<n;i++)
		{
			cin>>s[i];
		}
		
		int h[26]={0};
		int count1=0;
		for(int i=0;i<n;i++)
		{
			string str = s[i];
//			cout<<"str: "<<str<<endl;
			if(h[str[0] - 'a'] == 0)
			{
				
				count1++;
				h[str[0] - 'a']++;
//				cout<<"if: "<<count<<endl;
			}
			else if(h[str[0] - 'a'] == 1)
			{
				count1--;
				h[str[0] - 'a']++;
//				cout<<"else if: "<<rep<<endl;
			}
		}
		
		string a[n];
		for(int i=0;i<n;i++)
		{
			string strr = s[i];
			string sub = strr.substr(1);
			a[i] = sub;
		}
		
		sort(a,a+n);
		int count2=0;
    	for(int i=0;i<n;i++)
    	{
    		if(a[i]==a[i+1])
    			count2++;
		}
		
		
//		cout<<count*(count-1)<<endl;
	}
	return 0;
}
