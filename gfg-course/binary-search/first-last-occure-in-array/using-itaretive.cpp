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
int n,ans=0;

int first_occure_index(std::vector<int> v,int n,int x){
    int l=0,r=n-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(v[mid]==x && (mid==0 || v[mid-1]!=x)) 
        return mid;
        if(v[mid]>=x) r=mid-1;
        else l=mid+1;
    }
    return -1;
}

int last_occure_index(std::vector<int> v,int n,int x){
    int l=0,r=n-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(v[mid]==x && (mid==n-1 || v[mid+1]!=x)) 
        return mid;
        if(v[mid]<=x) l=mid+1;
        else r=mid-1;
    }
    return -1;
}


void solve()
{
    int n,x; cin>>n>>x;
    std::vector<int> v(n);
    for(auto &x: v) cin>>x;
    cout<<first_occure_index(v,n,x);
    cout<<" "<<last_occure_index(v,n,x)<<endl;

}

int main(){
    optimize();
    #ifndef ONLINE_JUDGE
    freopen("test_input.txt","r",stdin);
    freopen("test_output.txt","w",stdout);
    #endif
    int T=1;
    cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}
