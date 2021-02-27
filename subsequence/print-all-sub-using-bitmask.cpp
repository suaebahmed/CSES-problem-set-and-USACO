#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define For(i,n) for(ll i=0; i<int(n); ++i)
#define scanArr(v) for (auto &it : v) cin >> it;
#define all(v) (v).begin(), (v).end()
#define ff first
#define ss second
#define sz(s) (s).size()
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define deb(x) cout<<"For debug : "<<x<<endl;
typedef long long ll;
#define ld long double
#define mod 1000000007
const int mx=2e4+5;
#define ONLINE_JUDGE 1
//sue
/*
*/

void solve()
{
    string s; cin>>s;
    int n=sz(s);
    int num_of_subsequence=(1<<n)-1;
    cout<<"{}\n";
    for(int i=1; i<=num_of_subsequence; i++)
    {
        int tmp=i,j=0;
        while(tmp>0)
        {
            if(tmp&1) cout<<s[j];
            j++;
            tmp>>=1;
        }
        cout<<"\n";
    }
}

int main(){
    optimize();
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    solve();
    return 0;
}
