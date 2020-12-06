#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n;
    cin>>n;
    vector<int> coins(n+1);

    for(int i=0;i<n;i++)
    {
        cin>>coins[i];
    }
    int maxsum = 1000*n;
    vector<vector<bool>> dp(n+1,vector<bool> (maxsum,false));

    dp[0][0]=true;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=maxsum;j++)
        {
            dp[i][j]=dp[i-1][j];

            int left = j-coins[i-1];

            if(left>=0 && dp[i-1][left])
            {
                dp[i][j]=true;
            }
        }
    }
    vector<int> result;
    for(int i=1;i<=maxsum;i++)
    {
        if(dp[n][i])
        {
            result.push_back(i);
        }
    }
    cout<<result.size()<<endl;
    for(int x : result)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    return 0;
}
