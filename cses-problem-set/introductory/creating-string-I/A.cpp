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
int n,ans=1;
set<string> st;

void permutation(string s,int l,int n)
{
    if(l==n) st.insert(s);
    else
    {
        for(int i=l; i<n; i++)
        {
            swap(s[i],s[l]);
            permutation(s,l+1,n);
            swap(s[i],s[l]);
        }
    }
}

void solve()
{
    string s; cin>>s;
    n=sz(s);
    permutation(s,0,n);
    cout<<st.size()<<endl;
    for(auto x: st) cout<<x<<endl;
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
