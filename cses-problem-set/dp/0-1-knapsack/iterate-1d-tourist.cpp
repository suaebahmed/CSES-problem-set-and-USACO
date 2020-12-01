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
   ll n,W; cin>>n>>W;
   vector<ll> dp(W+1,0);

   for(int i=0; i<n; i++)
   {
       int x,y;//weight and value
       cin>>x>>y;
       for(int j=W; j>=x; j--)
       {
          dp[j]=max(dp[j], dp[j-x]+y);
       }
   }
   cout<<dp.back();
}
/*
4 10
4 5
8 12
5 8
3 1
price   page
weight  value
*/
void solve2()
{
   ll n,w; cin>>n>>w;
   ll MXW=27;
   vector<ll> dp(MXW+1,w+1);

   dp[0]=0;
   for(int i=0; i<n; i++)
   {
       int x,y;//weight and value
       cin>>x>>y;
       for(int w=MXW; w>=y; w--)
       {
          dp[w]=min(dp[w], dp[w-y]+x);
       }
       for(auto x: dp) cout<<x<<" ";
       cout<<endl;
   }
   for(int i=MXW; i>=0; i--)
   {
       if(dp[i]<=w)
       {
           cout<<i<<endl;
           break;
       }
   }
}

int main(){
    optimize();
    int T=1;
    //cin>>T;
    while(T--)
    {
        solve2();
    }
    return 0;
}
