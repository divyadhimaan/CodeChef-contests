#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    long long int r;
	    
	    r=1;
	   // cout<<n%10<<endl;
	    while(n)
	    {
	        
	        if((n%10)>5)
	        {
	          r=r*2;  
	        }
	        else if((n%10)<=5){
	            r=r*3;
	            
	        }
	        n=n/10;
	    }
	    cout<<r<<endl;
	}
	return 0;
}
