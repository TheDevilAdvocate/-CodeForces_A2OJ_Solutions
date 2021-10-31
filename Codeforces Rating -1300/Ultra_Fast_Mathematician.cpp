#include <bits/stdc++.h>
//code by -> Akshay Pratap Singh
#define ll long long int
#define ull unsigned long long int
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define pb push_back
//code by -> Akshay Pratap Singh
#define pf push_front
#define eb emplace_back
#define loop(i,n) for(ll i=0;i<(n);i++)
#define FOR(i,a,b) for(ll i=(a);i<=(b);i++)
//code by -> Akshay Pratap Singh
#define FORD(i,a,b) for(ll i=(a);i>=(b);i--)
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
using namespace std;
int main()
{
fastread();
    string s1,s2;
    cin>>s1;
    cin.ignore();
    cin>>s2;
    //cout<<s1<<" "<<s1<<endl;
    string ans="";
    for(ll i=0;i<s1.size();i++){
        if(s1[i] == s2[i]){ans=ans+"0";}
        else{ans=ans+"1";}
    }
    cout<<ans<<endl;
return 0;
}
//code by -> Akshay Pratap Singh
