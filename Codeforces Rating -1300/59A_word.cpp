//code by->Akshay Pratap Singh
#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define pb push_back
#define pf push_front
#define loop(i,n) for(ll i=0;i<(n);i++)
#define FOR(i,a,b) for(ll i=(a);i<=(b);i++)
#define FORD(i,a,b) for(ll i=(a);i>=(b);i--)
using namespace std;
int main()
{
fastread();
int t=1;
//cin>>t;
  //code by->Akshay Pratap Singh
while(t--){
    string s;
    string up="";
    string dw="";
    ll upper=0,lower=0;
    cin>>s;
    cin.ignore();
    ll n=(ll)s.size();
    loop(i,n){
        if(isupper(s[i])){
            upper++;
            }
        if(islower(s[i])){
            lower++;
            }
      //code by->Akshay Pratap Singh
    }
    if(upper <= lower){
        //lower is more , so answer on lower
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s << endl;
    }
    else{
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << s << endl;
    }
}
return 0;
}
//code by->Akshay Pratap Singh
