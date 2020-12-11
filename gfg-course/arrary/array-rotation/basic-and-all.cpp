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

void solve1();
void solve2();
void solve3();
/*
6 2
1 2 3 4 5 6
*/
int main(){
    optimize();
    int tt=1;
    //cin>>tt;
    for(int i=1; i<=tt; i++)
    {
        //cout<<"Case #: "<<i<<endl;
        solve2();
    }
    return 0;
}
void solve1()
{
    int n,d; cin>>n>>d;
    int ar[n];
    for(auto &x: ar) cin>>x;
    while(d--)
    {
        int tmp=ar[0];
        for(int i=0; i<n-1; i++) ar[i]=ar[i+1];
        ar[n-1]=tmp;
    }
    for(auto x: ar) cout<<x<<" ";

}

void solve2()
{
    int n,d; cin>>n>>d;
    int arr[n];
    for(auto &x: arr) cin>>x;
    int tmp[d];
    for(int i=0; i<d; i++) tmp[i]=arr[i];
    //---
    for(int i=0; i<n-d; i++) arr[i]=arr[i+d];
    for(int i=n-d,j=0; i<n; i++) arr[i]=tmp[j++];
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}

void solve3()
{
    int n,d; cin>>n>>d;
    int ar[n];
    for(auto &x: ar) cin>>x;

    reverse(ar,ar+d);
    reverse(ar+d,ar+n);
    reverse(ar,ar+n);
    for(auto x: ar) cout<<x<<" ";
}
