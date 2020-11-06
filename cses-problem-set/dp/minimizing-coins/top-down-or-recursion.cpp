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

int coinChange(vector<int> &c,int rem,vector<int> &dp)
{
    if(rem < 0) return -1;
    if(rem==0) return 0;
    if(dp[rem]!=0) return dp[rem];

    int min=INT_MAX;
    for(auto coin: c)
    {
        int c_res=coinChange(c,rem-coin,dp);
        if(c_res>=0 && c_res<min) min=c_res+1;
    }
    dp[rem]=(min==INT_MAX)?-1: min;
    return dp[rem];
}

void solve()
{
    int n,x; cin>>n>>x;
    vector<int> c(n,0);
    scanArr(c);
    vector<int> dp(x+1,0);
    cout<<coinChange(c,x,dp);
}

int main(){
    optimize();
    solve();
    return 0;
}
