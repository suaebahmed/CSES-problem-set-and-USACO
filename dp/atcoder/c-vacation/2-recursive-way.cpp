#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define For(i,n) for(ll i=0; i<int(n); ++i)
#define printArr(v) for(auto x: v) cout<<x<<" ";
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
const ll MX=1e5+5;
int n;
ll arr[MX][3];
ll dp[MX][4];

ll solve(int i,int prev)
{
    if(i==n) return 0;
    if(dp[i][prev]!=-1) return dp[i][prev];
    ll ans=INT_MIN;
    if(prev==0)
    {
        ans=max(ans,arr[i][1]+solve(i+1,1));
        ans=max(ans,arr[i][2]+solve(i+1,2));
    }
    else if(prev==1)
    {
        ans=max(ans,arr[i][0]+solve(i+1,0));
        ans=max(ans,arr[i][2]+solve(i+1,2)); //90+0=90
    }
    else if(prev==2)
    {
        ans=max(ans,arr[i][0]+solve(i+1,0));
        ans=max(ans,arr[i][1]+solve(i+1,1));//50+90=140
    }
    else
    {
        ans=max(ans,arr[i][0]+solve(i+1,0));
        ans=max(ans,arr[i][1]+solve(i+1,1));
        ans=max(ans,arr[i][2]+solve(i+1,2));//70+140=210
    }
    return dp[i][prev]=ans;
}

int main(){
    optimize();
    int T=1;
    //cin>>T;
    while(T--)
    {
        //0=a,1=b,2=c
        memset(dp,-1,sizeof(dp));
        cin>>n;
        for(int i=0; i<n; i++) for(int j=0; j<3; j++) cin>>arr[i][j];
        cout<<solve(0,3);
    }
    return 0;
}
