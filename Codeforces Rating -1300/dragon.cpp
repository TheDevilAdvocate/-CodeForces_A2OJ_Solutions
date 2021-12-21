#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define pb push_back
#define pf push_front
#define eb emplace_back
#define loop(i,n) for(ll i=0;i<(n);i++)
#define FOR(i,a,b) for(ll i=(a);i<=(b);i++)
#define FORD(i,a,b) for(ll i=(a);i>=(b);i--)
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
using namespace std;
template <typename... T>
void read(T &...args) {
((cin >> args), ...);
}
/*****READ CONTAINER****/
template <typename T>
void readContainer(T &t) {
for (auto &e : t) {
read(e);
}
}
/******PRINT CONTAINER******/
template <typename... T>
void write(string delimiter, T &&...args) {
((cout << args << delimiter), ...);
}
template <typename T>
void writeContainer(string delimiter, T &t) {
for (const auto &e : t) {
write(delimiter, e);
}
write("\n");
}
/******DEBUGGER******/
#define deb(...) logger(#__VA_ARGS__,__VA_ARGS__)
template<typename ...Args>
void logger(string vars, Args&&... values) {
cout << vars << " = ";
string delim = "";
(..., (cout << delim << values, delim= ", "));
}
/*--------------------------------------------------*/
bool compare1(pair<ll,ll> &p1,pair<ll,ll> &p2){
    return p1.first < p2.first;
}
bool compare2(pair<ll,ll> &p1,pair<ll,ll> &p2){
    return p1.second < p2.second;
}
int main()
{
fastread();
ll n,s;
cin>>s>>n;
    vector<pair<ll,ll>> v;
    v.reserve(1001);
    loop(i,n){
        ll x,y;
        read(x,y);
        v.pb(make_pair(x,y));
    }
    sort(v.begin(),v.end(),compare1);
    ll flag = 0;
    loop(i,n){
        if(s > v[i].first){
            flag++;
            s = s + v[i].second;
        }
    }
    if(flag == n){cout<<"YES"<<endl;}
    else if(flag != n){flag = 0;}
    if(flag == 0){
        sort(v.begin(),v.end(),compare2);
        loop(i,n){
            if(s > v[i].first){
                flag++;
                s = s + v[i].second;
            }
        }
        if(flag == n){cout<<"YES"<<endl;}
        else if(flag != n){flag = -1;}
    }
    if(flag == -1){
        cout<<"NO"<<endl;
    }

return 0;
}
