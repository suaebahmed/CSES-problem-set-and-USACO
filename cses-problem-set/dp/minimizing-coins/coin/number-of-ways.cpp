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
const ll mx=-1e18;

void solve()
{
    int n,x; cin>>n>>x;
    vector<int> c(n);
    scanArr(c);
    int dp[n][x+1]={0};

    for(int j=0; j<=x; j++)
    {
        if(j%c[0]==0) dp[0][j]=1;
        else dp[0][j]=0;
    }

    for(int i=1; i<n; i++)
    {
        for(int j=0; j<=x; j++)
        {
            if(j==0) dp[i][j]=1;
            else if(c[i]>j) dp[i][j]=dp[i-1][j];
            else dp[i][j]=dp[i-1][j]+dp[i][j-c[i]];
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=x; j++) cout<<dp[i][j]<<" ";
        cout<<endl;
    }

    cout<<dp[n-1][x]<<endl;
}

int main(){
    optimize();
    solve();
    return 0;
}
