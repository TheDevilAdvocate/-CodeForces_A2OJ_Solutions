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
    int n;
    cin>>n;
    int x=0,y=0,z=0;
    for(int i=0;i<n;i++){
        int X,Y,Z;
        cin>>X>>Y>>Z;
        x=x+X;
        y=y+Y;
        z=z+Z;
    }
    if(x==0 && y==0 && z==0){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
}
return 0;
}
