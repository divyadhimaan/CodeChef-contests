#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    
	    string s;
	    cin>>s;
	    n = s.length();
	    
	    int sum = 0;
	    vector<int> v;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='1')
	        {
	            sum++;
	        }
	        else
	        {
	            v.push_back(sum);
	            sum=0;
	        }    
	    }
	    
	    if(s[n-1]=='1')
	    {
	        v.push_back(sum);
	    }
	    
	    int count = 0;
	    for(int i=0;i<v.size();i++)
	    {
	        if(v[i]>=1)
	        {
	            count++;
	        }
	    }
	    
	    cout<<count<<endl;
	}
	return 0;
}
