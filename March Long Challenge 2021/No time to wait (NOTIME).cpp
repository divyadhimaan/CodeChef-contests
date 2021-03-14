#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

	    int n,h,t;
	    cin>>n>>h>>t;
	    int time[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>time[i];
	    }
	    sort(time,time+n);
	    if((time[n-1]+t)>=h)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	    
	
	return 0;
}
