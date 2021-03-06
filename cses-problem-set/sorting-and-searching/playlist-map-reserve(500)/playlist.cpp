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
const ll mx=1e5;
int n;

void solve()
{
    cin>>n;
    vi a(n);
    scanArr(a);
    int ans=0;
    unordered_map<int,int> mp;
    mp.max_load_factor(0.25);
    mp.reserve(512);
    for(int i=0,j=0; i<n; i++)
    {
        while(j<n && mp[a[j]]<1)
        {
            mp[a[j]]++;
            j++;
        }
        ans=max(ans,j-i);
        mp[a[i]]--;
    }
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
