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
const int mx=2e5;
int n;
/*
5
5 8
2 4
3 9
4 6
9 50

4
1 5
2 3
3 10
1 2
*/
void solve()
{
    cin>>n;
    set<array<int,2>> s;
    for(int i=0; i<n; ++i)
    {
        int a,b;
        cin>>a>>b;
        s.insert({2*a,1});
        s.insert({2*b+1,-1});
    }
    int ans=0,c=0;
    cout<<endl;
    for(array<int,2> a: s)
    {
        cout<<a[0]<<" "<<a[1]<<endl;
        c+=a[1];
        ans=max(c,ans);
    }
    cout<<ans<<endl;
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
