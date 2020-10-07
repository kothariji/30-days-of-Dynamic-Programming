#include <bits/stdc++.h>
#define lli long long int
using namespace std;



lli knapsack(lli weight[], lli value[], lli w, lli n)
{
	lli dp[n+1][w+1];

	for(int i =0; i<=n; i++)
	{
		for(int j= 0; j<=w; j++)
		{
			//initialisation condition
			if(i == 0 || j ==0)
				dp[i][j] = 0;
			else
			{
				if(weight[i-1] <= w)
					dp[i][j] = max(value[i-1] + dp[i-1][w-weight[i-1]], dp[i-1][w]);
				else 
					dp[i][j] = dp[i-1][w];
			}
		}
	}
	return dp[n][w];
}



int main()
{

	lli n,w;
	cin>>w>>n;
	lli weight[n], value[n];

	for(lli i =0; i<n; i++)
		cin>>weight[i]>>value[i];
	cout<<knapsack(weight, value, w, n);
	
	return 0;
}