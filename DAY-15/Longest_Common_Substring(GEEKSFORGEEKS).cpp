#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define MAX 105
#define MOD 1000000007
using namespace std;

int LCS(string s1, string s2, int n, int m){
    
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
    			dp[i][j] = 0;
	    }
	}
	int global = 0;
	for(int i=1; i<=n; i++)
	    for(int j=1; j<=m;j++)
    		global = max(global, dp[i][j]);
	   
	return global;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n1, n2;
        cin>>n1>>n2;
    	string s1, s2;
    	cin>>s1>>s2;
    	cout<<LCS(s1, s2, s1.length(), s2.length())<<endl;
    }

	return 0;
}