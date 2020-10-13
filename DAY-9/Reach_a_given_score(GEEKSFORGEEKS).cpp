#include<bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int knapsack(int sum)
{
    int n =3;
    int arr[n] = {3,5,10};
    int dp[n+1][sum+1];
    for(int i =0; i<n+1;i++)
        dp[i][0] = 1;
    for(int i =1; i<sum+1;i++)
        dp[0][i] = 0;
    for(int i = 1; i<n+1; i++)
        for(int j =1; j<sum+1; j++)
        {
            if(arr[i-1] <= j)
                dp[i][j] = dp[i][j - arr[i-1]] + dp[i-1][j];
            else
                dp[i][j] = dp[i-1][j];
        }
    return dp[n][sum];
}


int main()
 {
	lli t;
	cin>>t;
	while(t--)
	{   
        int sum;
        cin>>sum;
        cout<<knapsack(sum)<<endl;
	}
	return 0;
}