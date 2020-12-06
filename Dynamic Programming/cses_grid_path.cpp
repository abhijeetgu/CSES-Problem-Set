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
    int n;
    cin>>n;
    vector<vector<bool>> grid(n+1,vector<bool>(n+1));
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            char ch;
            cin>>ch;
            if(ch =='.') grid[i][j] = 1;
            else grid[i][j] = 0;
        }
    }

    vector<vector<ll>> dp(n+1,vector<ll>(n+1,0));
    dp[1][1]=1;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(grid[i][j])
            {


                (dp[i][j] += (i>1) ? dp[i-1][j] : 0)%=MOD;
                (dp[i][j] += (j>1) ? dp[i][j-1] : 0)%=MOD;

            }
            else
            {
                dp[i][j]=0;
            }
        }
    }
    cout<<dp[n][n]<<endl;






    return 0;
}






