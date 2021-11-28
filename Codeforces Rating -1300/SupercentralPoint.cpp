#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define pb push_back
#define pf push_front
#define eb emplace_back
#define loop(i, n) for (ll i = 0; i < (n); i++)
#define FOR(i, a, b) for (ll i = (a); i <= (b); i++)
#define FORD(i, a, b) for (ll i = (a); i >= (b); i--)
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
using namespace std;
/******READER******/
template <typename... T>
void read(T &...args) {
((cin >> args), ...);
}
/******DEBUGGER******/
#define deb(...) logger(#__VA_ARGS__, __VA_ARGS__)
template <typename... Args>
void logger(string vars, Args &&...values)
{
    cout << vars << " = ";
    string delim = "";
    (..., (cout << delim << values, delim = ", "));
}
/*--------------------------------------------------*/

static ll graph[2001][2001]={0};
bool up(pair<ll,ll> xy){
    ll x = xy.first;
    ll y = xy.second;
    FOR(i,0,y-1){
        if(graph[x][i] == 1){
            return true;
        }
    }
    return false;
}
bool down(pair<ll,ll> xy){
    ll x = xy.first;
    ll y = xy.second;
    FOR(i,y+1,2001){
        if(graph[x][i] == 1){
            return true;
        }
    }
    return false;
}
bool left(pair<ll,ll> xy){
    ll x = xy.first;
    ll y = xy.second;
    FOR(i,0,x-1){
        if(graph[i][y] == 1){
            return true;
        }
    }
    return false;
}
bool right(pair<ll,ll> xy){
    ll x = xy.first;
    ll y = xy.second;
    FOR(i,x+1,2001){
        if(graph[i][y] == 1){
            return true;
        }
    }
    return false;
}

int main()
{
    fastread();
    vector<pair<ll,ll>> xy;
    ll n,ans=0;
    cin>>n;
    loop(i,n){
        ll a,b;
        cin>>a>>b;
        graph[a+1000][b+1000]=1;
        xy.push_back(make_pair(a+1000,b+1000));
    }
    for(ll i = 0 ; i<xy.size() ; i++){
        pair<ll,ll> p={0,0};
        p.first=xy[i].first;
        p.second=xy[i].second;
        if(up(p) && down(p) && left(p) && right(p)){
            ans++;
        }
    }
    cout<<ans<<endl;

    return 0;
}
