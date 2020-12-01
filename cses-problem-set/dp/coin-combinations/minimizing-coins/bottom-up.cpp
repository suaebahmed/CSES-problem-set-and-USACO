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
    int n,x; cin>>n>>x;
    vector<int> c(n,0);
    scanArr(c);
    vector<int> dp(x+1,x+1);

    dp[0]=0;
    for(int i=1; i<=x; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(c[j]<=i) dp[i]=min(dp[i],1+dp[i-c[j]]);
        }
    }
    cout<<(dp[x]>x?-1:dp[x])<<endl;
}

int main(){
    optimize();
    solve();
    return 0;
}
