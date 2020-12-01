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

void solve()
{
    ///int n,x; cin>>n>>x;
    /// coins={1, 3, 5, 10};
    int n=4,x=4;

    vector<int> dp(x+1);
    dp[0]=1;
    for(int i=1; i<=x; i++)
    {
        if(i>= 1) dp[i]+=dp[i-1];
        if(i>= 3) dp[i]+=dp[i-3];
        if(i>= 5) dp[i]+=dp[i-5];
        if(i>= 10) dp[i]+=dp[i-10];
    }
    for(auto x: dp) cout<<x<<' ';
    cout<<endl;
    cout<<"permutation ways: "<<dp[x]<<endl;
    /**
    (4) =>
        1+1+1+1
        3+1
        3+1
    */
}
void solve1()
{
    int n,x; cin>>n>>x;
    vector<int> coins(n),dp(x+1,0);
    for(auto &x: coins) cin>>x;
    //base case
    dp[0]=1;
    for(int i=1; i<=x; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i>=coins[j]) dp[i]=(dp[i]+dp[i-coins[j]])%mod;
        }
    }
    cout<<dp[x];
}
int main(){
    optimize();
    int tt=1;
    //cin>>tt;
    for(int i=1; i<=tt; i++)
    {
        //cout<<"Case #: "<<i<<endl;
        solve1();
    }
    return 0;
}
