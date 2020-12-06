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
    int n,m;
    cin>>n>>m;
    vector<int> arr(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    vector<vector<int>> dp(n+2,vector<int> (m+2,0));
    for(int i=1;i<=n;i++)
    {
        for(int x = 1;x<=m;x++)
        {
            if(i==1)
            {
                if(arr[i]==0 || arr[i]==x)
                {
                    dp[i][x]=1;
                }
                else
                {
                    dp[i][x] = 0;
                }
            }
            else
            {
                if(arr[i]==0 || arr[i]==x)
                {
                    dp[i][x] = ((dp[i-1][x-1]+dp[i-1][x])%MOD + dp[i-1][x+1])%MOD;
                }
                else
                {
                    dp[i][x] = 0;
                }

            }


        }
    }

    int ans = 0;
    for(int x=1;x<=m;x++)
    {
        ans =(ans+ dp[n][x])%MOD;
    }
    cout<<ans<<endl;

    return 0;
}






