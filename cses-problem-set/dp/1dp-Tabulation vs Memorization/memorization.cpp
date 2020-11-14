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
const int MX=20;
int dp[MX];

int fact(int x)
{
    if(x==0) return 1;
    //deb(x);
    if(dp[x]!=-1) return dp[x];
    return (dp[x]=x*fact(x-1));
}

void solve()
{
    int n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    cout<<fact(n)<<endl;
    cout<<fact(n-1)<<endl;// again call
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
