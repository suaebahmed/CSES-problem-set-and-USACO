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
int n,ans=0;

void solve()
{
    int k;
    cin>>n>>k;
    vector<array<int,2>> v(n);
    vector<int> vis(n,0);

    for(int i=0; i<n; i++)
    {
        int a,b; cin>>a>>b;
        v[i]={b,a};
    }
    sort(all(v));

    for(int i=0; i<k; i++)
    {
        int curr=0,cnt=0;
        for(int j=0; j<n; j++)
        {
            if(curr<=v[j][1] && vis[j]==0)
            {
                cnt++;
                curr=v[j][0];
                vis[j]=1;
            }
        }
        if(cnt==0) break;
        ans+=cnt;
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
