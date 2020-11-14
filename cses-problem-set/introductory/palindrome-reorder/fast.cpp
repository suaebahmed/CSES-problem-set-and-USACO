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
const ll mx=1e3+2;
int n,ans=0;

void solve()
{
    string s,ans=""; cin>>s;
    int a[26]={0};
    n=sz(s);
    for(int i=0; i<n; i++) a[s[i]-'A']++;
    // check valid or not
    bool ok=false;
    int odd=-1;
    for(int i=0; i<26; i++)
    {
        int x=a[i];
        if(x%2==1 && !ok)
        {
            ok=true;
            odd=i;
        }
        else if(x%2==1)
        {
            cout<<"NO SOLUTION"<<endl;
            return;
        }
    }
    // create palindrome
    if(odd>=0) ans+=(char)('A'+odd),a[odd]--;
    for(int i=25; i>=0; i--)
    {
        string tmp(a[i]/2,(char)'A'+i);
        ans=tmp+ans+tmp;
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
