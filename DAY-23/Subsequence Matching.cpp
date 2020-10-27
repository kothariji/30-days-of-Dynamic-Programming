#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define MAX 10005
#define MOD 1000000007
using namespace std;

int dp[MAX][MAX];
bool LCS(string s1, string s2, int n, int m){

	 int dp[n+1][m+1];
    
    for(int i =0; i<n+1; i++)
	    dp[i][0] = 0;
	for(int i =0; i<m+1; i++)
	    dp[0][i] = 0;
	
	for(int i=1; i<=n; i++)
	{
	    for(int j=1; j<=m;j++)
	    {
    		if(s1[i-1] == s2[j-1]) 
    			dp[i][j] = 1 + dp[i-1][j-1];
    		else 
    			dp[i][j] = max(dp[i][j-1], dp[i-1][j]);	
	    }
	}
	if(dp[n][m] == s1.length())
		return true;
	return false;
}

int main()
{
	memset(dp, -1, sizeof(dp));
	string s1 = "KHAJ";
	string s2 = "KOTHARIJI";
	if(LCS(s1, s2, s1.length(), s2.length()))
		cout<<"YES, s1 is a subsequence of s2";
	else
		cout<<"NO, s1 is not a subsequence of s2";

	return 0;
}