#include<bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define MAX 1005
using namespace std;


int unbounded_knapsack(int weight[], int value[], int w, int n)
{
    int dp[n+1][w+1];
    
    //it is similar to the knapsack problem but just we need to call for same item when we chose that particluar item
    //initialisation condition
    for(int i=0;i<n+1; i++)
        dp[i][0] = 0;
    for(int i=0;i<w+1; i++)
        dp[0][i] = 0;
        
    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=w; j++)
        {
            if(weight[i-1] <= j)
                dp[i][j] = max((value[i-1] + dp[i][j-weight[i-1]]), dp[i-1][j]);
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
	    int n, w;
	    cin>>n>>w;
	    int weight[n], value[n];
	    for(int i =0; i<n; i++)
	        cin>>value[i];
	    for(int i =0; i<n; i++)
	        cin>>weight[i];
	    cout<<unbounded_knapsack(weight, value, w, n)<<endl;
	}
	return 0;
}
