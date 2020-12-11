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
const ll MXN=1e3+2;

ll gcd(ll a,ll b)
{
    return b?gcd(b,a%b):a;
}
/**
    2,3 common multiple 6;
*/
void solve()
{
    int n; cin>>n;
    int ans=1;
    for(int i=1; i<=n; i++)
    {
        ans=((ans*i)/gcd(i,ans));
    }
    cout<<ans<<endl;
}

int main(){
    optimize();
    int T=1;
    //cin>>T;
    while(T--)
    {
        //solve();
        int array2D[2][4] = {1,2,3,4,5,6,7,8}; /* (i) */
        int array1D[][4] = {1,2,3,4,5,6,7,8}; /* (ii) */
        //int array8D[2][] = {1,2,3,4,5,6,7,8}; /* (iii) */
        int array0D[][] = {1,2,3,4,5,6,7,8}; /* (iv) */
    }
    return 0;
}
