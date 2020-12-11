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

bool isItSafeToplaced(int row,int col,vector<vector<bool>> &board)
{
    //vertically up
    int r=row-1;
    int c=col;
    while(r>=0)
    {
        if(board[r][c]) return false;
        r--;
    }
    //horizontally left
    r=row;
    c=col-1;
    while(c>=0)
    {
        if(board[r][c]) return false;
        c--;
    }
    //diagonally left-up
    r=row-1;
    c=col-1;
    while(r>=0 && c>=0)
    {
        if(board[r][c]) return false;
        r--;
        c--;
    }
    //diagonally right-up
    r=row-1;
    c=col;
    while(r>=0 && c<(int)board[0].size())
    {
        if(board[r][c]) return false;
        r--;
        c++;
    }
    return true;
}

void n_qeen(vector<vector<bool>> &board,int row,int col,int rq,int cqp,string &ans)
{
    if(col==(int)board[0].size())
    {
        row++;
        col=0;
    }
    if(row==board.size())
    {
        //
        return;
    }
    if(rq==cqp)
    {
        //ans="queen placed: "+to_string(cqp);
    for(auto v: board)
    {
        for(auto x: v) cout<<x<<" ";
        cout<<endl;
    }
        return;
    }

    if(isItSafeToplaced(row,col,board))
    {
        //do
        board[row][col]=true;
        n_qeen(board,row,col+1,rq,cqp+1,ans);
        //undo
        board[row][col]=false;
    }
    //not placed the curr queen
    n_qeen(board,row,col+1,rq,cqp,ans);
}

int main(){
    optimize();
    ///matrix,row,col,
    ///required_queen,curr_queen_placed,ans;
    vector<vector<bool>> board(4,vector<bool>(4));
    string s;
    n_qeen(board,0,0,4,0,s);
    cout<<s<<endl;
    /*
    for(auto v: board)
    {
        for(auto x: v) cout<<x<<" ";
        cout<<endl;
    }
    */
    return 0;
}
