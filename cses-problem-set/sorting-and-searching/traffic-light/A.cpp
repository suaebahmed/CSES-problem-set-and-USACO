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
const ll MXN=2e5+5;

map<int,int> mp;
int p[MXN],r,l;

void solve()
{
    int n,x; cin>>x>>n;


    set<int> st;
    st.insert(0);
    st.insert(x);
    mp[x]=1;

    for(int i=0; i<n; i++)
    {
        cin>>p[i];
        auto it=st.lower_bound(p[i]);

        r=*it;
        --it;
        l=*it;
        --mp[r-l];
        if(!mp[r-l]) mp.erase(r-l);

        st.insert(p[i]);
        ++mp[r-p[i]];
        ++mp[p[i]-l];
        cout<<(--mp.end())->ff<<" ";
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
