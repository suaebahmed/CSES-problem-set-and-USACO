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
const ll mx=1e3+2;
int n,ans=0;

void add(int &subset,int x)
{
    subset=subset^(1<<(x-1));
}
void display(int subset)
{
    for(int i=0; i<=15; i++)
    {
        if(subset&(1<<i)) cout<<i+1<<" ";
    }
}
void remove(int &subset,int x)
{
    subset=subset^(1<<(x-1));
}

void solve()
{
    n=15; /// universal set
    display(n);

    add(n,5);
    add(n,7);

    remove(n,4);
    remove(n,2);

    cout<<endl;
    display(n);
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
