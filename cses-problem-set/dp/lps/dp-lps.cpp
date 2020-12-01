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
   string s; cin>>s;
   n=sz(s);
   vector<vi> dp(n,vi(n,0));

   for(int i=0; i<n; i++) dp[i][i]=1;
   for(int col=2; col<=n; col++)
   {
       for(int i=0; i<n-col+1; i++)
       {
           int j=i+col-1;
           if(s[i]==s[j] && col==2) dp[i][j]=2;
           else if(s[i]==s[j]) dp[i][j]=dp[i+1][j-1]+2;
           else dp[i][j]=max(dp[i][j-1],dp[i+1][j]);
       }
   }
   cout<<dp[0][n-1]<<endl;
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
