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
    ll r,c; cin>>r>>c;
    if(r==c && r==1) cout<<1<<endl;
    else if(r>=c)
    {
        if(r&1) cout<<((r-1)*(r-1)+1)+(c-1)<<endl;
        else cout<<r*r-(c-1)<<endl;
    }
    else
    {
        if(c&1) cout<<c*c-(r-1)<<endl;
        else cout<<((c-1)*(c-1)+1)+(r-1)<<endl;
    }
}

int main(){
    optimize();
    int T=1;
    cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}
