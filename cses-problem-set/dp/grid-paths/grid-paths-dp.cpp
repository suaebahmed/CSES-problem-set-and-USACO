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
   cin>>n;
   vector<vi> dp(n,vi(n,0)),v(n,vi(n,0));
   for(int i=0; i<n; i++) for(int j=0; j<n; j++)
   {
       char ch; cin>>ch;
       v[i][j]=(ch=='.')?1:0;
   }
   ///base case
   if(v[n-1][n-1]) dp[n-1][n-1]=1;
   ///last row
   for(int i=n-2; i>=0; i--)
   {
      if(v[n-1][i]==0) dp[n-1][i]=0;
      else dp[n-1][i]=dp[n-1][i+1];
   }
   ///last column
   for(int i=n-2; i>=0; i--)
   {
      if(v[i][n-1]==0) dp[i][n-1]=0;
      else dp[i][n-1]=dp[i+1][n-1];
   }

   for(int i=n-2; i>=0; i--)
   {
       for(int j=n-2; j>=0; j--)
       {
          if(v[i][j]==0) dp[i][j]=0;
          else  dp[i][j]=(dp[i+1][j]%mod+dp[i][j+1]%mod)%mod;
       }
   }
   cout<<dp[0][0];
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
