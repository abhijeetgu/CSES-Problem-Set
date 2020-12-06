#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    int n,x;
    cin>>n>>x;

    vector<int> price(n+1);
    vector<int> page(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>price[i];
    }
    for(int i=1;i<=n;i++)
    {
        cin>>page[i];
    }

    vector<vector<int>> dp(n+1,vector<int> (x+1,0));
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=x;j++)
        {
            if(j>=price[i])
            {
                dp[i][j] = max( page[i]+dp[i-1][j-price[i]] , dp[i-1][j]);
            }
            else
            {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    cout<<dp[n][x]<<endl;
    return 0;
}
