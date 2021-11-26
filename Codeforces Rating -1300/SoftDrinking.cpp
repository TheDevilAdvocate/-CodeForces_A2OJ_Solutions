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
    ll t=1;
    while (t--)
    {
        ll n, k, l, c, d, p, nl, np;
        read(n, k, l, c, d, p, nl, np);
        ll total_liq = k*l;
        ll total_lime = c*d;

        // p salt
        //for one shot-> nl,np,1
        //toast each friend can make->group banaega!!
        ll a = total_liq/nl;
        ll b= total_lime/1;
        ll s= p/np;

        ll decider = min(a,min(b,s));
        cout<<decider/n<<endl;
    }
    return 0;
}
