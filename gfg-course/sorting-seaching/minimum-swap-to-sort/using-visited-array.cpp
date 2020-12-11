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

void solve()
{
    int N=4;
    int arr[]={3,1,4,2};
    pair<int,int> arPos[N];
    for(int i=0; i<N; i++){
        arPos[i].first=arr[i];
        arPos[i].second=i;
    }
    int ans=0;
    vector<bool> vis(N,0);
    sort(arPos,arPos+N);

    for(int i=0; i<N; i++){
        if(vis[i]==true || arPos[i].second==i) continue;
        else{
            int j=i;
            int cycle_size=0;
            while(!vis[j]){
                vis[j]=true;
                j=arPos[j].second;
                cycle_size++;
            }
            if(cycle_size>0){
                ans+=cycle_size-1;
            }
        }
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
