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
const ll mx=1e6;
/*
10 10
2 3 3 6 6 6 6 8 9 9
9 5 4 6 3 9 3 3 5 2
*/
void solve()
{
    int n,m; cin>>n>>m;
    multiset<int,greater<int>> ms;
    For(i,n)
    {
        int x; cin>>x;
        ms.insert(x);
    }
    for(int i=0; i<m; i++)
    {
        int x; cin>>x;
        auto it=ms.lower_bound(x);
        if(it==ms.end()) cout<<-1<<endl;
        else
        {
            cout<<*it<<endl;
            ms.erase(it);
        }
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
