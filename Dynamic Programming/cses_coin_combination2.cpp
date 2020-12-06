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
    int n,x;
    cin>>n>>x;
    vector<ll> coins(n+1);
    fr(0,n)
    {
        cin>>coins[i];
    }

    vector<vector<ll>> dp(n+1,vector<ll>(x+1,0));
    //vector<ll> dp(x+1,0);
    dp[0][0]=1;


    for(int j=0;j<=n;j++)
    {
        for(int i=0;i<=x;i++)
        {



            if(j>0)
            {
                dp[j][i] = dp[j-1][i];
            }
            else
            {
                dp[j][i]=0;
            }

            if(i-coins[j]>=0)
            {
                (dp[j][i] += dp[j][i-coins[j]])%=MOD;

            }
        }
    }
    cout<<dp[n][x]%MOD<<endl;


    return 0;
}




