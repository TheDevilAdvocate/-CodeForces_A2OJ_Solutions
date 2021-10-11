//Code-> Akshay Pratap Singh
#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define pb push_back
//Code-> Akshay Pratap Singh
#define pf push_front
#define loop(i,n) for(ll i=0;i<(n);i++)
#define FOR(i,a,b) for(ll i=(a);i<=(b);i++)
#define FORD(i,a,b) for(ll i=(a);i>=(b);i--)
//Code-> Akshay Pratap Singh
using namespace std;
int main()
{
fastread();
int t=1;
//cin>>t;
while(t--){
    ll n;
    cin>>n;
    string s= to_string(n);
    //cout<<s<<endl;
    char a='4';
    char b='7';
  //Code-> Akshay Pratap Singh
    ll lucky=0,unlucky=0;
    ll p =(ll)s.size();
    loop(i,p){
        if(s[i]==a || s[i]==b){lucky++;}
        else{unlucky++;}
    }
    if(unlucky == 0){cout<<"YES"<<endl;}
    else if(lucky == 4 || lucky == 7){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
return 0;
}
//Code-> Akshay Pratap Singh
