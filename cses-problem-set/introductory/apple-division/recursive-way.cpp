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
const ll mx=1e3+2;
ll n,ans=1e9+1,totalSum=0;

void findMinDiff(vi arr,int i,ll csum)
{
    if(i==n) ans=min(ans,abs(totalSum-2*csum));
    else
    {
        findMinDiff(arr,i+1,csum+arr[i]);
        findMinDiff(arr,i+1,csum);
    }
}

void solve()
{
   cin>>n;
   vector<int> v(n);
   for(int i=0; i<n; i++)
   {
       cin>>v[i];
       totalSum+=v[i];
   }
   findMinDiff(v,0,0);
   cout<<ans<<endl;
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
