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
const int mx=2e5+5;

void solve()
{
   int n,q;
   cin>>n>>q;
   vl v(n),psum(1);//psum
   scanArr(v);
   partial_sum(all(v),back_inserter(psum));

   while(q--)
   {
       int l,r;
       cin>>l>>r;
       if(l==1) cout<<psum[r-1]<<endl;
       else cout<<psum[r-1]-psum[l-2]<<endl;
       //if(l==1) cout<<psum[r-1]
       //else cout<<psum[r-1]-psum[l-2]
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
