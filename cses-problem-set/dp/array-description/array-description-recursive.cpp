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
const ll MXN=1e2;
int n,m,ans=0;
int a[MXN];

int  arr_discription(int id)
{
    if(idx!=0 && abs(a[idx]-a[idx+1])>1) return 0;
    else
    {
        cout<<idx<<endl;
        int step=0;
        for(int i=1; i<=m; i++)
        {
            if(a[i]==0)
            {
                if(i==0 && abs(a[i]-a[i+1])<=1)
            {
                a[i]=i;
                return step=1+arr_discription(i);
            }
            else if(i==n-1 && abs(a[i]-a[i-1])>1)
            {
                a[i]=i;
                return step=1+arr_discription(i);

            }
            else
            {
                a[i]=i;
                return step=1+arr_discription(i);
            }
            }
        }
        //deb(step);
        //return step;
    }
}

void solve()
{
    cin>>n>>m;
    for(int i=0; i<n; i++) cin>>a[i];
    cout<<arr_discription(0)<<endl;
}
/*
4 5
2 0 2 0
*/
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
