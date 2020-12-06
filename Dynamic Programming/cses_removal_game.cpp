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
    vector<ll> nums(n+1);

    for(int i=1;i<=n;i++)
    {
        cin>>nums[i];
    }

    vector<vector<ll>> dp(n+2,vector<ll>(n+2));
    ll j;
    for(ll gap=1;gap<=n;gap++)
    {
        for(ll i=1,j=gap;j<=n;i++,j++)
        {
            ll x = ((i+2) <= j) ? dp[i+2][j] : 0;
            ll y = ((i+1)<=j-1) ? dp[i+1][j-1] : 0;
            ll z = ((i)<=j-2) ? dp[i][j-2] : 0;

            dp[i][j] = max(nums[i] + min(x,y),nums[j]+ min(y,z));
        }
    }

    cout<<dp[1][n]<<endl;




    return 0;
}









