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
    /// this is a knapsack problem

    int n,x; cin>>n>>x;
    vector<vi> dp(n+1,vi(x+1));
    vector<int> pc(n+1),pg(n+1);
    for(int i=1; i<=n; i++) cin>>pc[i];
    for(int i=1; i<=n; i++) cin>>pg[i];

    for(int i=0; i<=n; i++)
    {
        for(int s=0; s<=x; s++)
        {
            if(i==0 || s==0) dp[i][s]=0;
            else if(pc[i]<=s) dp[i][s]=max(dp[i-1][s],dp[i-1][s-pc[i]]+pg[i]);
            else dp[i][s]=dp[i-1][s];
        }
    }
    cout<<dp[n][x];
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
