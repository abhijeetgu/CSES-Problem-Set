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
    ll n;
    cin>>n;
    vector<ll> dp(n+1,0);
    dp[0] =1;
 
    fr(1,n+1)
    {
        for(int j=1;j<=6;j++)
        {
            if(j>i)
                break;
            dp[i] += dp[i-j]%MOD;
        }
    }
    cout<<dp[n]%MOD<<endl;
 
 
    return 0;
}


--------------------------------------------------------------------------------------------------------------------
 
 #include<bits/stdc++.h>
using namespace std;
 
#define fast_io  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
 
int main()
{
    fast_io
    int n,x;
    cin>>n>>x;
    vector<int> coins(n);
    for(int i=0;i<n;i++)
    {
        cin>>coins[i];
    }
    vector<int> dp(x+1,1e9);
    dp[0] =0;
 
 
    for(int i=1;i<=x;i++)
    {
 
        for(int j=0;j<n;j++)
        {
          if(i>=coins[j])
          {
             dp[i] = min(dp[i],dp[i-coins[j]]+1);
          }
        }
 
    }
    cout << (dp[x] == 1e9 ? -1 : dp[x]) << endl;
 
    return 0;
}
 
 
