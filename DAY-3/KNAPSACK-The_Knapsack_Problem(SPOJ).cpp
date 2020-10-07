#include <bits/stdc++.h>
#define lli long long int
using namespace std;

lli dp[2005][2005];

lli knapsack(lli weight[], lli value[], lli w, lli index)
{
	if((index <0)|| (w <= 0))
		return 0;

	if(dp[index][w] != -1)
		return dp[index][w];
	if(weight[index] <= w)
		dp[index][w] = max( (value[index] + knapsack(weight, value, w - weight[index], index-1)), knapsack(weight, value, w, index-1));
	else
		dp[index][w] = knapsack(weight, value, w, index-1);

	return dp[index][w];
}



int main()
{

	lli n,w;
	cin>>w>>n;
	lli weight[n], value[n];

	for(lli i =0; i<n; i++)
		cin>>weight[i]>>value[i];

	memset(dp, -1, sizeof(dp));

	cout<<knapsack(weight, value, w, n-1);
	
	return 0;
}