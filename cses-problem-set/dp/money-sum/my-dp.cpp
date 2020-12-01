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
const ll MXN=1e5+2;
int n,ans=0;

void solve()
{
    cin>>n;
    int sum=0;
    vector<int> coins(n);
    for(int i=0; i<n; i++)
    {
        cin>>coins[i];
        sum+=coins[i];
    }
    vector<int> dp(sum+1,0);
    dp[0]=1;
    for(int i=0; i<n; i++)
    {
        for(int j=sum; j>=coins[i]; j--)
        dp[j] |= dp[j-coins[i]];
    }
    cout<<count(all(dp),1)-1<<endl;
    for(int i=1; i<=sum; i++)
    {
        if(dp[i]) cout<<i<<" ";
    }
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
