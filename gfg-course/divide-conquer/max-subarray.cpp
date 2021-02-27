#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Rep(i,n) for(ll i=0; i<int(n); ++i)
#define read(v) for (auto &it : v) cin >> it;
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(s) s.size()
#define ff first
#define ss second
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define deb(x) cout<<"For debug : "<<x<<endl;
#define lowb(a, x) (lower_bound((a).begin(),(a).end(),(x))-(a).begin())
#define uppb(a, x) (upper_bound((a).begin(),(a).end(),(x))-(a).begin())
typedef long long ll;
#define ld long double
#define mod 1000000007
#define endl '\n'
const int MAXN=2*1e5;
vector<int> v;
int n;

int maxCrossingV(int l,int m,int r){
    int sum=0;
    int left_sum=INT_MIN;
    for(int i=m; i>=l; i--){
        sum=sum+v[i];
        if(sum>left_sum) left_sum=sum;
    }

    sum=0;
    int right_sum=INT_MIN;
    for(int i=m+1; i<=r; i++){
        sum=sum+v[i];
        if(sum>right_sum) right_sum = sum;
    }

    return max(left_sum,max(right_sum,left_sum+right_sum));
}

int maxSubarray(int l,int r){
    if(l>=r){
        cout<<v[l]<<" ";
        return v[l];
    }
    int mid=(l+r)/2;
    int leftmx=maxSubarray(l,mid);
    int rightmx=maxSubarray(mid+1,r);
    int c=maxCrossingV(l,mid,r);
    return max(c,max(leftmx,rightmx));
}

void solve(){
    int n; cin>>n;
    v.resize(n);
    for(int i=0; i<n; i++) cin>>v[i];
    cout<<maxSubarray(0,n-1)<<endl;
    
    for(int i=0; i<n; i++) cout<<v[i]<<" ";
}

int main(){
    optimize();
    int tt=1;
    // scanf("%d",&tt);
    // cin>>tt;
    for(int i=1; i<=tt; i++){
        // cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;
}