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

void solve()
{
    int n,x; cin>>n>>x;
    multimap<int,int> mp;
    vi v(n);
    For(i,n)
    {
        int x; cin>>x;
        mp.insert(m_p(x,i));
        v[i]=x;
    }
    for(int i=0; i<n; i++)
    {
        if(mp.find(x-v[i])!=mp.end())
        {
            auto it=mp.find(x-v[i]);
            if(i+1!=it->ss+1)
            {
                cout<<i+1<<" "<<it->ss+1<<endl;
                return;
            }
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
}

int main(){
    optimize();
    freopen("test_input.txt","r",stdin);
    freopen("test_output.txt","w",stdout);

    int T=1;
    //cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}
