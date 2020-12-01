#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define For(i,n) for(ll i=0; i<int(n); ++i)
#define scanArr(v) for (auto &it : v) cin >> it;
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define ff first
#define ss second
#define mp make_pair
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
const ll mx=-1e18;

void solve()
{
   ll n,m; cin>>n>>m;
   vector<ll> v(n+1,0);
   vector<ll> wt(n+1,0);
   for(int i=1; i<=n; i++)
   {
       cin>>wt[i]>>v[i];
   }
   vector<vl> dp(n+1,vl(m+1,0));

   for(int i=0; i<=n; i++)
   {
       for(int w=0; w<=m; w++)
       {
            if(i==0 || w==0) dp[i][w]=0;
            else if(wt[i]<=w) dp[i][w]=max(v[i]+dp[i-1][w-wt[i]], dp[i-1][w]);
            else dp[i][w]=dp[i-1][w];
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
