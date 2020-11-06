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
#define ar array
const ll mx=1e5;

void solve()
{
    int n; cin>>n;
    vector<ar<int,2>> v(n);
    for(int i=0; i<n; i++)
    {
        int a,b;
        cin>>a>>b;
        v[i]={b,a};
    }
    sort(all(v));
    cout<<endl;
    for(int i=0; i<n; i++) cout<<v[i][0]<<" "<<v[i][1]<<endl;

    int cur=v[0][0],cnt=1;
    for(int i=1; i<n; i++)
    {
        if(cur<=v[i][1])
        {
            cnt++;
            cur=v[i][0];
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
