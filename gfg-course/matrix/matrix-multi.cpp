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
const ll MXN=1e10;
/**
3 2
4 8 0 2 1 6
2 2
5 2 9 4
*/
void solve()
{
    int n1,m1; cin>>n1>>m1;
    vector<vi> A(n1,vi(m1));
    for(auto &v: A) for(auto &x: v) cin>>x;

    int n2,m2; cin>>n2>>m2;
    vector<vi> B(n2,vi(m2));
    for(auto &v: B) for(auto &x: v) cin>>x;

    if(m1!=n2) return; //not valid

    for(int r=0; r<n1; r++){
        for(int c=0; c<m2; c++){
            int ans=0;
            for(int j=0; j<m1; j++){
                ans+=A[r][j]*B[j][c];
            }
            cout<<ans<<" ";
        }
        cout<<endl;
    }
}

int main(){
    optimize();
    int tt=1;
    //cin>>tt;
    for(int i=1; i<=tt; i++)
    {
        //cout<<"Case #: "<<i<<endl;
        solve();
    }
    return 0;
}
