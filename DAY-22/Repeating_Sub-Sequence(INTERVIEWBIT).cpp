int Solution::anytwo(string A) {
    string s1(A), s2(A);
    int n = A.length();
    int m = n;
    int dp[n+1][m+1];
    
    for(int i =0; i<n+1; i++)
	    dp[i][0] = 0;
	for(int i =0; i<m+1; i++)
	    dp[0][i] = 0;
	
	for(int i=1; i<=n; i++)
	{
	    for(int j=1; j<=m;j++)
	    {
    		if((s1[i-1] == s2[j-1])  && (i != j)) 
    			dp[i][j] = 1 + dp[i-1][j-1];
    		else 
    			dp[i][j] = max(dp[i][j-1], dp[i-1][j]);	
	    }
	}
	if(dp[n][m] <= 1)
	    return 0;
	return 1;
}
