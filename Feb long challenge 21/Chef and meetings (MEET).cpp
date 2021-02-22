#include<bits/stdc++.h>
using namespace std;

int timecheck(string s, string l)
{
	
	string h = s.substr(0,2);
	string m = s.substr(3,2);
//	cout<<"min: "<<m<<endl;
	
	int time = 0;
		
		if(h=="12" && l=="PM")
		{
			string t = h+m;
			stringstream t1(t);
	    	time = 0; 
	    	t1 >> time;
		}
		else if(h=="12" && l=="AM")
		{
			h="00";
			string t = h+m;
			stringstream t1(t);
	    	time = 0; 
	    	t1 >> time;
		}
		else if(l == "AM")
    	{
    		string t = h+m;
			stringstream t1(t);
	    	time = 0; 
	    	t1 >> time;
		}
		else if(l == "PM")
		{
			stringstream t2(h);
	    	int hour = 0; 
	    	t2 >> hour;
//	    	cout<<"hour: "<<hour<<endl;
	    	stringstream t3(m);
	    	int min = 0; 
	    	t3 >> min;
//	    	cout<<"min: "<<min<<endl;
	    	hour += 12;
	    	
	    	time = (hour * 100) + min;
		}
//		cout<<time<<endl;
		return time;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string p,l;
		cin>>p>>l;
		
		int meeting = timecheck(p,l);
//		cout<<meeting<<endl;
		int n;
		cin>>n;
		vector<int> v;
		while(n--)
		{
			string a,l1,b,l2;
			cin>>a>>l1>>b>>l2;
			
			int time1 = timecheck(a,l1);
			int time2 = timecheck(b,l2);
			
			if(time1 <= meeting && time2>=meeting)
			v.push_back(1);
			else
			v.push_back(0);
		}
		for(int i=0;i<v.size();i++)
		{
			cout<<v[i];
		}
		cout<<endl;
	}
}
