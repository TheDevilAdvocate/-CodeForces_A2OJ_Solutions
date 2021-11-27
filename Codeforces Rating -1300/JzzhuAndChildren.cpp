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
int main()
{
    fastread();
    ll n,m;
    cin>>n>>m;
    pair<ll,ll> temp={0,0};
    deque<pair<ll,ll>> d;
    loop(i,n){
        ll data;
        cin>>data;
        d.push_back(make_pair(data,i+1));
    }
    //auto i = d.begin();
    while(d.empty() == 0){
        //cout<<"called"<<endl;
        d.begin()->first=d.begin()->first-m;
        temp=make_pair(d.begin()->first,d.begin()->second);
        if(d.begin()->first <= 0){
            d.pop_front();
        }
        else{
            temp=make_pair(d.begin()->first,d.begin()->second);
            d.pop_front();
            d.push_back(temp);
        }
    }
    cout<<temp.second<<endl;
    return 0;
}
