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
    ll sum = (n*(n+1))/2;
    if(sum%2)
    {
        cout<<0<<endl;
    }
    else
    {
        sum /=2;
        vector<vector<ll>> dp(n+1,vector<ll>(sum+1,0));
        dp[0][0]=1;
        for(ll i=1;i<n;i++)
        {
            for(ll j=0;j<=sum;j++)
            {

                //dp[i][j] = dp[i-1][j];
                //ll left = j-i;
                dp[i][j]=((i>j) ? 0 : (dp[i][j-i])%MOD + (dp[i-1][j])%MOD)%MOD;

                /*if(left>=0)
                {
                    //(dp[i][j] += dp[i-1][j-i])%=MOD;
                    dp[i][j] = ((dp[i][j])%MOD + (dp[i-1][j-i])%MOD)%MOD;
                }*/

            }
        }
        cout<<dp[n-1][sum]%MOD<<endl;
    }






    return 0;
}










