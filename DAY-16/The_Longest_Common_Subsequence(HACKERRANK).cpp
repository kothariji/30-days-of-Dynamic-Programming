#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define MAX 10005
#define MOD 1000000007
using namespace std;

vector <int> LCS(vector <int> s1, vector <int> s2, int n, int m){

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
                dp[i][j] = max(dp[i][j-1], dp[i-1][j]);    
        }
    }

    int i = n, j = m;
    vector <int> answer;
    while((i >0) && (j > 0))
    {
        if(s1[i-1] == s2[j-1])
        {
            answer.insert(answer.begin(),s1[i-1]);
            i--, j--;
        }
        else
        {
            if(dp[i][j-1] == dp[i][j])
                j--;
            else
                i--;
        }
    }


    return answer;
}

int main()
{
    int n1, n2;
    cin>>n1>>n2;
    vector <int> v1(n1), v2(n2);
    for(int i=0;i<n1; i++)
        cin>>v1[i];
    for(int i=0;i<n2; i++)
        cin>>v2[i];
    vector <int> v3 = LCS(v1, v2, n1, n2);
    for(auto c: v3)
        cout<<c<<" ";
    return 0;
}