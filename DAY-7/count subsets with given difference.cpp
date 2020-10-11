#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

/************* Bottom Up Approach********************/
int countsubsetwithDiff(int arr[],  int n, int dif)
{
    int range = accumulate(arr, arr+n,0);

    int reqsum = (dif + range);

    if((reqsum % 2) == 1)
        return 0;
    reqsum /= 2;
    int dp[n+1][reqsum+1];
    for(int i = 0; i<n+1; i++)
       dp[i][0] = 1;
    for(int i = 1; i<reqsum+1; i++)
       dp[0][i] = 0;

    for(int i = 1; i<n+1; i++)
    {
        for(int j = 1; j<reqsum+1; j++)
        {
            if(arr[i-1]  <= j)
                dp[i][j] = dp[i-1][j - arr[i-1]] + dp[i-1][j];
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    return dp[n][reqsum];     
}


int main()
{
    int arr[5] = {2, 3, 7,8,10};
    for(int i = 1; i<= 15; i++)
    cout<<i<<"  "<<countsubsetwithDiff(arr, 5, i)<<endl;

    return 0;   
}