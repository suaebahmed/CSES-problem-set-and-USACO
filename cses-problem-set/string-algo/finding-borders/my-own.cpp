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
#define m_p make_pair
#define sz(s) (s).size()
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define deb(x) cout<<"For debug : "<<x<<endl;
typedef long long ll;
#define ld long double
#define mod 1000000007
const int MXN=2e4+5;

void solve()
{
    string s; cin>>s;
    int n; n=sz(s);
    vector<string> px,sx;
    string tmp="";
    for(int i=0; i<n-1; i++)
    {
        tmp+=s[i];
        px.pb(tmp);
    }
    tmp.clear();
    for(int i=n-1; i>0; i--)
    {
        tmp=s[i]+tmp;
        sx.pb(tmp);
    }
    for(int i=0; i<(int)sz(px)&&i<(int)sz(sx); i++)
    {
        if(px[i]==sx[i]) cout<<px[i].length()<<" ";
    }

}

int main(){
    optimize();
    ll T=1;
    //cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}
