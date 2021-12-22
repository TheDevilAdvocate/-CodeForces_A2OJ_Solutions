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
int main()
{
fastread();
ll n,m;
cin>>n>>m;
multiset<ll> f1;
multiset<ll,greater<ll>> f2;

loop(i,m){
    ll data;
    cin>>data;
    f1.emplace(data);
    f2.emplace(data);
}
    ll min = 0;
    ll times = n;
    while(times--){
        min = min + *f1.begin();
        ll temp = *f1.begin()-1;
        f1.erase(f1.begin());
        if(temp > 0){
            f1.emplace(temp);
        }
    }
    ll max = 0;
    times = n;
    while(times--){
        max = max + *f2.begin();
        ll temp = *f2.begin()-1;
        f2.erase(f2.begin());
        if(temp > 0){
            f2.emplace(temp);
        }
    }
    cout<<max<<" "<<min<<endl;
return 0;
}
