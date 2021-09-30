#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define pb push_back
#define pf push_front
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
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='.'){
                ans=ans+"0";
            }
            else{
                if((i!= s.size()-1) && (s[i+1]=='.')){
                    ans=ans+"1";
                    i=i+1;
                }
                else{
                    ans=ans+"2";
                    i=i+1;
                }
            }
        }
        cout<<ans<<"\n";
}
return 0;
}
