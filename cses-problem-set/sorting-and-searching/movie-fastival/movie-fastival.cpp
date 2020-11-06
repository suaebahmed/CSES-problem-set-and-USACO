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
const ll mx=1e5;

bool cmp(pii a,pii b)
{
    if(a.ss < b.ss) return 1;
    else if(a.ss==b.ss) return (a.ff<b.ff);
    else return 0;
}
/*
5
3 10
4 5
4 9
5 8
9 10
*/
void solve()
{
    int n; cin>>n;
    vector<pii> v(n);
    for(int i=0; i<n; i++)
    {
        int a,b;
        cin>>a>>b;
        v[i]={a,b};
    }
    sort(all(v),cmp);
    //cout<<endl;
    //for(int i=0; i<n; i++) cout<<v[i].ff<<" "<<v[i].ss<<endl;
    int cur=v[0].ss,cnt=1;
    for(int i=1; i<n; i++)
    {
        if(cur<=v[i].ff)
        {
            cnt++;
            cur=v[i].ss;
        }
    }
    cout<<cnt<<endl;
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
