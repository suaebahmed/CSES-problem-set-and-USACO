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

void computeLPSArray(string s,int n,vi &v)
{
    int i=0,j=1;
    while(j<n)
    {
        if(s[i]==s[j])
        {
            i++;
            v[j]=i;
            j++;
        }
        else
        {
            if(i>0) i=v[i-1];//i--;
            else v[j]=0,j++;
        }
    }
}

void solve()
{
    string s,p;
    cin>>s>>p;
    int n=sz(s),m=sz(p);
    vector<int> lps(m,0);
    computeLPSArray(p,m,lps);

    int i=0,j=0,cnt=0;
    while(i<n)
    {
        if(s[i]==p[j]) i++,j++;
        else
        {
            if(j>0) j=lps[j-1];
            else i++;
        }
        //count
        if(j==m) cnt++,j=lps[j-1];
    }
    cout<<cnt;
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
