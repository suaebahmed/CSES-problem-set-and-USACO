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
/*
5 6
0 0 0 0 0 0 0
0 0 1 2 3 4 5
0 1 0 2 1 3 2
0 2 2 0 3 3 1
0 3 1 3 0 4 2
0 4 3 3 4 0 4
4
*/
void solve()
{
    int a,b;
    cin>>a>>b;

    vector<vi> dp(a+1,vi(b+1,0));
    for(int i=1; i<=a; i++)
    {
        for(int j=1; j<=b; j++)
        {
            if(i==j) dp[i][j]=0;

            else if(i==1) dp[i][j]=j-1;
            else if(j==1) dp[i][j]=i-1;

            else if(i*i==j || j*j==i) dp[i][j]=1;
            else if(i>=j) dp[i][j]=dp[i-j][j]+1;
            else dp[i][j]=dp[i][j-i]+1;
        }
    }
    for(auto v: dp)
    {
        for(auto x: v) cout<<x<<" ";
        cout<<endl;
    }
    cout<<dp[a][b];
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
