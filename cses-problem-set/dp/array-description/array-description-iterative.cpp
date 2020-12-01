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
const ll MXN=1e3+2;
int n,ans=0;

void solve()
{
    int m; cin>>n>>m;
    vector<int> ar(n+1,0);
    for(int i=1; i<=n; i++) cin>>ar[i];
    vector<vi> dp(n+2,vi(m+2,0));

    for(int i=1; i<=n; i++)
    {
        for(int x=1; x<=m; x++)
        {
            if(i==1)
            {
                if(ar[i]==0 || ar[i]==x) dp[i][x]=1;
                else dp[i][x]=0;
            }
            else
            {
                if(ar[i]==0 || ar[i]==x)
                    dp[i][x]=((dp[i-1][x-1]+dp[i-1][x])%mod+dp[i-1][x+1])%mod;
                else dp[i][x]=0;
            }
        }
    }
    ll ans=0;
    for(int x=1; x<=m; x++) ans=(ans+dp[n][x])%mod;
    cout<<ans<<endl;
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
