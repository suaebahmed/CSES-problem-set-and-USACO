#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define For(i,n) for(ll i=0; i<int(n); ++i)
#define scanArr(v) for (auto &it : v) cin >> it;
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define ff first
#define ss second
#define m_p make_pair
#define sz(s) (s).size()
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define deb(x) cout<<"For debug : "<<x<<endl;
#define endl "\n"
typedef long long ll;
#define ld long double
#define mod 1000000007
#define ar array
const ll mx=1e3+2;
int n,ans=0;

void solve()
{
    string x,y;
    cin>>x>>y;
    int n=sz(x),m=sz(y);
    vector<vi> dp(n+1,vi(m+1,0));

    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=m; j++)
        {
            if(j==0) dp[i][j]=i;
            else if(i==0) dp[i][j]=j;

            else if(x[i-1]==y[j-1]) dp[i][j]=dp[i-1][j-1];
            else dp[i][j]=1+min(dp[i-1][j],    /// insert
                            min(dp[i][j-1],    /// remove
                              dp[i-1][j-1]));  /// replace
        }
    }
    cout<<dp[n][m];
}

int main(){
    optimize();
    int T=1;
    //cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}
