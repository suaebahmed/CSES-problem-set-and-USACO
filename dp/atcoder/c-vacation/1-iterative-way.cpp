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
    cin>>n;
    vector<int> dp(3,0);
    scanArr(dp);
    for(int i=0; i<n-1; i++)
    {
        int a,b,c,x,y;
        cin>>a>>b>>c;
        x=max(dp[1]+a,dp[2]+a);
        y=max(dp[0]+b,dp[2]+b);
        dp[2]=max(dp[0]+c,dp[1]+c);
        dp[0]=x;
        dp[1]=y;
    }
    cout<<*max_element(all(dp))<<endl;
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
