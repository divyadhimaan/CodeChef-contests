#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<string> removefirst(vector<string> s)
{
//	sort(s.begin(),s.end());
	vector<string> v;
	for(int i=0;i<s.size();i++)
	{
		string str = s[i];
		string sub = s[i].substr(1);
		v.push_back(sub);
		
	}
	sort(v.begin(), v.end());
	for(int i =0;i<v.size()-1;i++)
	{
		if(v[i]==v[i+1])
		{
			v.erase(v.begin()+i);
		}
	}
//  	v.erase(unique(v.begin(), v.end()), v.end());
	return v;
}

vector<char> getfirst(vector<string> s)
{
	vector<char> v;
	int h[26] = {0};
	for(int i=0;i<s.size();i++)
	{
		string str = s[i];
		char sub = str[0];
		if(h[sub - 'a'] == 0)
			{
				h[str[0] - 'a']++;
				v.push_back(sub);
			}
			else if(h[str[0] - 'a'] == 1)
			{
				h[str[0] - 'a']++;
			}
	}
	return v;
}

//int check(vector<char> f,vector<string> r,vector<string> s )
//{
//	int result;
//	int count=0;
//	
//	for(int i=0;i<f.size();i++)
//	{
//		for(int j=0;j<r.size();j++)
//		{
//			if(f[i]+r[j] == )
//		}
//	}
//}

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> s;
		for(int i=0;i<n;i++)
		{
			string str;
			cin>>str;
			s.push_back(str);
		}
		vector<string> rest = removefirst(s);
		vector<char> first = getfirst(s);
		
		for(int i=0;i<n;i++)
		{
			cout<<rest[i]<<endl;
		}
//		cout<<first[n-1]+rest[0];
//		int ans = check(first,rest,s);
	}
}
