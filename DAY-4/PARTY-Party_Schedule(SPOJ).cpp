#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define MAX 1000005
#define MOD 1000000007
using namespace std;

void knapsack(int cost[], int fun[], int p, int n)
{
	int dp[n+1][p+1];
	for(int i=0; i<n+1; i++)
		dp[i][0] = 0;
	for(int i=0; i<p+1; i++)
		dp[0][i] = 0;

	for(int i =1; i<n+1; i++)
	{
		for(int j =1; j<p+1; j++)
		{
			if(cost[i-1] <= j)
				dp[i][j] = max((fun[i-1] + dp[i-1][j - cost[i-1]]), dp[i-1][j]);
			else
				dp[i][j] = dp[i-1][j];
		}
	}

	int max_ans = dp[n][p];
	int idx = INT_MAX;
	for(int i =0; i<n+1; i++)
	{
		for(int j =0; j<p+1; j++)
		{
			if(dp[i][j] == max_ans)
			{
				if(idx > j)
					idx = j;
			}
		}
	}
	cout<<idx<<" "<<max_ans<<endl;
}

int main()
{
	while(1)
	{
		int p, n;
		cin>>p>>n;
		if((p == 0) && (n==0))
			break;
		int cost[n], fun[n];
		for(int i =0; i<n; i++)
			cin>>cost[i]>>fun[i];
		knapsack(cost, fun, p, n);
	}
	return 0;
}