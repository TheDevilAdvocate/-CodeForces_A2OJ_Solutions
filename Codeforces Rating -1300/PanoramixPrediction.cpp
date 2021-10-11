#include<bits/stdc++.h>
//Code by-> Akshay Pratap Singh
#define ll long long int
#define ull unsigned long long int
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define pb push_back
#define pf push_front
//Code by-> Akshay Pratap Singh
#define loop(i,n) for(ll i=0;i<(n);i++)
#define FOR(i,a,b) for(ll i=(a);i<=(b);i++)
#define FORD(i,a,b) for(ll i=(a);i>=(b);i--)
using namespace std;
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (ll i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
int main()
{
fastread();
int t=1;
//cin>>t;
  //Code by-> Akshay Pratap Singh
while(t--){
    ll n,m;
    cin>>n>>m;
    if(n == 2){
        if(m == 3){cout<<"YES"<<endl;}
        else{
            cout<<"NO"<<endl;
        }
    }
    else if(n == 3){
        if(m == 5){cout<<"YES"<<endl;}
        else{
            cout<<"NO"<<endl;
        }
    }
    else{
        ll chk = -1;
        FOR(i,n+1,m){
            if(isPrime(i))
            {
                if(i == m){
                    cout<<"YES"<<endl;
                    chk++;
                    break;
                  //Code by-> Akshay Pratap Singh
                }
                else{
                    cout<<"NO"<<endl;
                    chk++;
                    break;
                }
            }
        }
        if(chk == -1){cout<<"NO"<<endl;}
    }
}
return 0;
}
