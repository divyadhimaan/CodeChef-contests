#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	vector<int> v;
	cin>>n;
	for (int i=1; i<=sqrt(n); i++) 
    { 
        if (n%i == 0) 
        { 
            if (n/i == i) 
            {
            	if(i<10)
					v.push_back(i);	
			} 
  
            else
            {
            	if(i<10)
            		v.push_back(i);
            	if(n/i<10)
            		v.push_back(n/i);
			} 
        } 
    } 
    sort(v.begin(),v.end());
    
    cout<<v[v.size() - 1];
}
