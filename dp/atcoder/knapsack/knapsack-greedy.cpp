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
int ans=0;

bool cmp(pii a,pii b)
{
    double r1,r2;
    r1=(double)a.ss/a.ff;
    r2=(double)b.ss/b.ff;
    return (r1>r2);
}
void solve()
{
    int n,w; cin>>n>>w;
    vector<pii> v(n);
    for(int i=0; i<n; i++) cin>>v[i].ff>>v[i].ss;
    sort(all(v),cmp);

    cout<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<v[i].ff<<" "<<v[i].ss<<endl;
    }
    cout<<endl;

    ll loadedW=0,finalValue=0;
    for(int i=0; i<n; i++)
    {
        if(loadedW+v[i].ff <= w)
        {
            loadedW+=v[i].ff;
            finalValue+=v[i].ss;
        }
    }
    cout<<finalValue<<" "<<loadedW<<endl;
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
