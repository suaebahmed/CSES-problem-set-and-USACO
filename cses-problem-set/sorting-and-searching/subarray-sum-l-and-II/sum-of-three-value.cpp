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

void solve()
{
   int n,x;
   cin>>n>>x;
   vector<array<int,2>> v(n);
   for(int i=0; i<n; i++)
   {
        cin>>v[i][0];
        v[i][1]=i+1;
   }
   sort(all(v));
   for(int i=0; i<n; i++)
   {
       ll x2=x-v[i][0];
       for(int j=i+1,k=n-1; j<n; j++)
       {
           while(j<k&&v[j][0]+v[k][0]>x2) k--;
           if(v[j][0]+v[k][0]==x2&&j!=k)
           {
               cout<<v[i][1]<<" "<<v[j][1]<<" "<<v[k][1]<<endl;
               return;
           }
       }
   }
   cout<<"IMPOSSIBLE"<<endl;
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
