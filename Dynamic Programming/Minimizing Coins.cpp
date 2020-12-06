#include<bits/stdc++.h>
using namespace std;
#define fr(a,b)    for(int i=a;i<b;++i)
#define rep(i,a,b)    for(int i=a;i<b;++i)
#define ll long long
#define ull unsigned long long int
#define fast_io  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
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
    fast_io
    int n,x;
    cin>>n>>x;
    vector<int> coins(n+1);
    fr(0,n)
    {
        cin>>coins[i];
    }
    vector<int> dp(x+1,1e9);
    dp[0] =0;
    fr(1,x+1)
    {
 
        for(int j=0;j<n;j++)
        {
          if(i>=coins[j])
          {
              dp[i] = min(dp[i],dp[i-coins[j]]+1);
          }
        }
 
    }
    if(dp[x]!=1e9)
    {
        cout<<dp[x]<<"\n";
    }
    else
    {
        cout<<"-1"<<"\n";
    }
 
 
    return 0;
}
 
