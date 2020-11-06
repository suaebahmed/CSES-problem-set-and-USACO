/*
ID: suaebah1
TASK: ride
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */
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
using namespace std;

int main() {
    freopen("ride.in","r",stdin);
    freopen("ride.out","w",stdout);

    string s,t;
    cin>>s>>t;
    int n=sz(s),m=sz(t);
    ll g1=1,g2=1;
    for(int i=0; i<n; i++)
    {
        g1=(g1%47)*(((ll)s[i]-'A'+1)%47);
    }
    for(int i=0; i<m; i++)
    {
        g2=(g2%47)*(((ll)t[i]-'A'+1)%47);
    }
    g1=g1%47;
    g2=g2%47;

    if(g1==g2) cout<<"GO"<<endl;
    else cout<<"STAY"<<endl;
    return 0;
}
