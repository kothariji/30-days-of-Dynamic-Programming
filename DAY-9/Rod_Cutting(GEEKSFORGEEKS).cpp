#include<bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int knapsack(int arr[], int n)
{
    int dp[n+1][n+1];
    for(int i=0; i<n+1; i++)
        dp[i][0] = 0;
    for(int i=0; i<n+1; i++)
        dp[0][i] = 0;
    for(int i =1; i<n+1; i++)
    {
        for(int j =1; j<n+1; j++)
        {
            if(i <= j)
                dp[i][j] = max(arr[i-1] + dp[i][j- i], dp[i-1][j]);
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    return dp[n][n];
}

int main()
 {
	lli t;
	cin>>t;
	while(t--)
	{   
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i =0; i<n; i++)
	        cin>>arr[i];
	    cout<<knapsack(arr,n)<<endl;
	}
	return 0;
}