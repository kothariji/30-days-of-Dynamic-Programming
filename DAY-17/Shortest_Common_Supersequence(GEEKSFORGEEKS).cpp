#include<bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int SCS(string s1, string s2, int n, int m)
{
    int dp[n+1][m+1];
    for(int i=0; i<n+1; i++)
        dp[i][0] = 0;
    for(int i=0; i<m+1; i++)
        dp[0][i] = 0;
    for(int i=1; i<n+1; i++)
    {
        for(int j=1; j<m+1; j++)
        {
            if(s1[i-1] == s2[j-1])
                dp[i][j] = dp[i-1][j-1] + 1;
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    return n + m - dp[n][m];
}

int main()
 {
	lli t;
	cin>>t;
	while(t--)
	{   
	    string s1, s2;
	    cin>>s1>>s2;
	    cout<<SCS(s1, s2, s1.length(), s2.length())<<endl;
	}
	return 0;
}