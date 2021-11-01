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
using namespace std;
int main()
{
fastread();
ll n;
cin>>n;
    ll a[n];
    ll min=-1 , max=-1;
    ll imin=-1 , imax= -1;
    loop(i,n){
        ll data;
        cin>>data;
        if(min == -1 && max == -1){
            min=data;
            max=data;
            imin=i+1;
            imax=i+1;
        }
        else{
            if(min >= data ){
                min = data;
                imin = i+1;
            }
            if( data > max ){
                max= data;
                imax=i+1;
            }
        }
    }
    //cout<<max<<" at "<<imax<<"\n"<<min<<" at "<<imin<<endl;
    if( imin > imax ){
        cout<<(imax - 1)+(n - imin)<<endl;
    }
    else{
        cout<<(imax - 1)+(n - imin - 1)<<endl;
    }

return 0;
}
