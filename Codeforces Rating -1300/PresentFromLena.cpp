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
void solve(ll n){
    for(ll i = n ; i>=0 ; i--){
        ll space = i;
        loop(k,space){cout<<"  ";} //spaces
        for(ll j = 0 ; j<n-i+1 ; j++){
            if(i == n){cout<<j;}
            else{
                cout<<j<<" ";
            }
        }
        for(ll j = n-i-1 ; j>=0 ; j--){
            if(j == 0){
                cout<<j;
            }
            else{cout<<j<<" ";}
        }
        //loop(k,space){cout<<" ";} //spaces
        cout<<endl;
    }
    for(ll i = 0 ; i<n ; i++){
        ll space = i+1;
        loop(k,space){cout<<"  ";} //spaces
        loop(x,n-i){
                if(n-i == 1){
                    cout<<x;
                }
                else{
                    cout<<x<<" ";
                }
            }
        for(ll x= n-i-2 ; x>=0 ; x--){
            if(x==0){
                cout<<x;}
                else{cout<<x<<" ";}
        }
        //loop(k,space){cout<<" ";} //spaces
        cout<<endl;
    }
}
int main()
{
fastread();
    ll n;
    cin>>n;
    solve(n);
return 0;
}

/*
n->3
      0
    0 1 0
  0 1 2 1 0
0 1 2 3 2 1 0
  0 1 2 1 0
    0 1 0
      0
*/ 
