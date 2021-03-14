#include <bits/stdc++.h>
using namespace std;

bool isRectangle(int m)
{
    // finding row and column size
    int rows = m.size();
    if (rows == 0)
        return false;
    int columns = m[0].size();
 
    // scanning the matrix
    for (int y1 = 0; y1 < rows; y1++)
      for (int x1 = 0; x1 < columns; x1++)
 
          // if any index found 1 then try
          // for all rectangles
          if (m[y1][x1] == 1)
            for (int y2 = y1 + 1; y2 < rows; y2++)
              for (int x2 = x1 + 1; x2 < columns; x2++)
                if (m[y1][x2] == 1 && m[y2][x1] == 1 && 
                                       m[y2][x2] == 1)
                  return true;
    return false;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int mat[n][m];
		for(int i=0;i<n;i++)
		{
			string s;
			cin>>s;
			
			for(int j=0;j<m;j++)
			{
				if(s[j]=='1')
					mat[i][j]=1;
				else if(s[j]=='0')
					mat[i][j]=0;
			}
		}
		if(isRectangle(mat))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
//		for(int i=0;i<n;i++)
//		{
//			for(int j=0;j<m;j++)
//			{
//				if()
//			}
//		}
	}
}
