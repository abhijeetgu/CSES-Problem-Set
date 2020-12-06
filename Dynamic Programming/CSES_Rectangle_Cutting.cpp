#include<bits/stdc++.h>
using namespace std;
#define fr(a,b)    for(int i=a;i<b;++i)
#define rep(i,a,b)    for(int i=a;i<b;++i)
#define ll long long
#define ull unsigned long long int
#define fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x

const int MOD = 1000000007;

int main()
{
    fast
    int a,b;
    cin>>a>>b;

    vector<vector<int>> dp(a+2,vector<int>(b+2));

    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            if(i==j)
            {
                dp[i][j]=0;
            }
            else
            {
                dp[i][j]=1e9;
                for(int x=1;x<i;x++)
                {
                    dp[i][j] = min(dp[i][j], dp[i-x][j]+dp[x][j]+1);
                }
                for(int y =1;y<j;y++)
                {
                    dp[i][j] = min(dp[i][j], dp[i][j-y]+dp[i][y]+1);
                }
            }
        }
    }

    cout<<dp[a][b]<<endl;



    return 0;
}








