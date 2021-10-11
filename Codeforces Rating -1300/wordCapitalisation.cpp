#include<bits/stdc++.h>
//code->Akshay Pratap Singh
#define ll long long int
#define ull unsigned long long int
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define pb push_back
//code->Akshay Pratap Singh
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
while(t--){
    string s;
    cin>>s;
    cin.ignore();
    if(isupper(s[0])){
        cout<<s<<endl;
    }
    else{
        s[0]=toupper(s[0]);
        cout<<s<<endl;
    }
//code->Akshay Pratap Singh
}
return 0;
}
//code->Akshay Pratap Singh
