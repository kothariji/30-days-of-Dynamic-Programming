#include<bits/stdc++.h>

using namespace std;
int check(int val[],int n,int w)
{
    int dp[n+1][w+1];
    for(int i= 0; i<n+1; i++)
        dp[i][0] = 0;
    for(int i= 0; i<w+1; i++)
        dp[0][i] = INT_MIN+1;
    
    for(int i =1; i<w+1; i++)
    {
        if(i%val[0] == 0)
            dp[1][i] = i/val[0];
        else
            dp[1][i] = INT_MIN+1;
    }
    
    for(int i=2; i<n+1; i++)
    {
        for(int j = 1; j <w+1; j++)
        {
            if(val[i-1] <= j)
                dp[i][j] = max((1+dp[i][j-val[i-1]]),dp[i-1][j]);
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    return dp[n][w];
}
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int W;
	    cin>>W;
	    int val[3];
	    for(int i=0;i<3;i++)
	    {
	        cin>>val[i];
	    }
	    cout<<check(val,3,W)<<endl;
	}
	return 0;
}