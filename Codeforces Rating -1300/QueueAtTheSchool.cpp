#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define pb push_back
#define pf push_front
using namespace std;
void swapper(char* x,char* y){
    char temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
fastread();
int t=1;
//cin>>t;
while(t--){
    int n,tt;
    cin>>n>>tt;
    cin.ignore();
    string s;
    cin>>s;
    cin.ignore();
    for(int i=0;i<tt;i++){
        for(int j=0;j<n;j++){
            if(s[j]=='B' &&j!=n-1){
                if(s[j+1]=='G'){
                    swapper(&s[j],&s[j+1]);
                        j=j+1;
                }
            }
        }
    }
    cout<<s<<"\n";

}
return 0;
}
//GBGGB
