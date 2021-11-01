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
//code by-> Akshay Pratap Singh
using namespace std;
void swapper(ll* a,ll* b){
    ll temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
fastread();
    ll n;
    cin>>n;
    ll p[n+1];
    p[0]=0;
    if(n%2 != 0){cout<<-1<<endl;}
    else{
        //p[p[i]]=i && p[i] != i;3
        for(ll i=1;i<n+1;i++){
            p[i]=i;
        }
        for(ll i=1;i<n+1;i=i+2){
            swapper(&p[i],&p[i+1]);
        }
        for(ll i=1;i<n+1;i++){cout<<p[i]<<" ";}
    }
return 0;
}
