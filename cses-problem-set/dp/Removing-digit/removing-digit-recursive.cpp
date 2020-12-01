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
const ll MXN=1e6+5;
int n,ans=0;
int dp[MXN];
/**
 *    -- Alhamdullah --
 *    author:  suaeb
 *    created: 22.11.2020 00:11:00PM
 *    -> this is my first own dp recursive solution
**/
int removingDigit(int n)
{
    if(n==0) return 0;
    else
    {
        if(dp[n]!=-1) return dp[n];
        int tmp=n,minStep=1e9;
        while(tmp>0)
        {
            int di=tmp%10;
            tmp/=10;
            if(di==0) continue;
            minStep=min(minStep,1+removingDigit(n-di));
        }
        return dp[n]=minStep;
    }
}

void solve()
{
    cin>>n;
    memset(dp,-1,sizeof(dp));
    cout<<removingDigit(n);
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
