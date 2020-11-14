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
#define vi vector<int
#define vl vector<ll>
#define pb push_back
#define deb(x) cout<<"For debug : "<<x<<endl;
#define endl "\n"
typedef long long ll;
#define ld long double
#define mod 1000000007
const ll mx=1e3+2;
int n,ans=1e9+1;

void solve()
{
   cin>>n;
   vector<int> v(n);
   ll sum=0;
   for(int i=0; i<n; i++)
   {
       cin>>v[i];
       sum+=v[i];
   }
   int num_of_sub_seq=(1<<n)-1;
   ans=min((ll)ans,sum); // empty sub_sequence

   for(int i=1; i<num_of_sub_seq; i++)
   {
       int j=0,tmp=i;
       ll sub_seq_sum=0;
       while(tmp)
       {
           if(tmp&1) sub_seq_sum+=v[j];
           j++;
           tmp>>=1;
       }
       ll G2=sum-sub_seq_sum;
       ans=min((ll)ans,abs(G2-sub_seq_sum));
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
