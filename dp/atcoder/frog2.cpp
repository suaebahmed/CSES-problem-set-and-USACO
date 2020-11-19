#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define For(i,n) for(ll i=0; i<int(n); ++i)
#define printArr(v) for(auto x: v) cout<<x<<" ";
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
const ll MX=1e18;
int n;

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<ll> v(n);
    scanArr(v);
    vector<ll> dp(n,MX);
    dp[0]=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<=i+k; j++)
        {
            if(j<n)
            dp[j]=min(dp[j],dp[i]+abs(v[i]-v[j]));
        }
    }
    cout<<dp[n-1];
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
