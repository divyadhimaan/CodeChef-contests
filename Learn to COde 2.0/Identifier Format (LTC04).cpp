#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long int t;
	cin>>t;
	int count =0;
	while(t--)
	{
	    
	   char ch;
	   cin>>ch;
	   string s1,s2;
	   cin>>s1>>s2;
	   transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
	   transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
	   if(ch=='A')
	   {
	      s2[0] = s2[0] - 32;
	      cout<<s1+s2<<endl;
	   }
	   else if(ch=='B')
	   {
	       cout<<s1<<"_"<<s2<<endl;
	   }
	   else if(ch=='C')
	   {
	       transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
	       transform(s2.begin(), s2.end(), s2.begin(), ::toupper);
	        cout<<s1<<"_"<<s2<<endl;
	       
	   }
	   else if(ch=='D')
	   {
	       s1[0]=s1[0]-32;
	       s2[0]=s2[0]-32;
	       cout<<s1<<"-"<<s2<<endl;
	   }
	   else if(ch == 'E' || ch=='F' || ch=='G' || ch=='H')
	   {
	       for(int i=1;i<s1.length();i=i+2)
	       {
	           s1[i]=s1[i] - 32;
	       }
	       for(int i=1;i<s2.length();i=i+2)
	       {
	           s2[i]=s2[i] - 32;
	       }
	       cout<<s1<<"|"<<s2<<endl;
	   }
	}
	return 0;
}
