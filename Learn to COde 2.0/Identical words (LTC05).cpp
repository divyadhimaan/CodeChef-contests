#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string s1,s2,s3;
	    cin>>s1>>s2>>s3;
	    sort(s1.begin(),s1.end());
	    sort(s2.begin(),s2.end());
	    sort(s3.begin(),s3.end());
	    if(s1==s2 && s1==s3)
	    {
	        cout<<"Possible"<<endl;
	    }
	    else
	    {
	        cout<<"Not Possible"<<endl;
	    }
	    
	}
	return 0;
}
