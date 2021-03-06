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
#define ar array
const ll mx=1e3+2;
int n,ans=0;

void solve()
{
    cin>>n;
    //if(n%400==0 || (n%100!=0 && n%4==0)) cout<<"leap year\n";
    //else cout<<"No\n";
    int last_y=1900+n-1;
    int leap_y=(n-1)/4;
    cout<<n*365+leap_y<<endl;

}

int main() {
    optimize();
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
    int T=1;
    //cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}
