#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define pb push_back
#define pf push_front
using namespace std;
bool checker(int* x){
    int n=*x;
    vector<int> v;
    for(int i=0;i<4;i++){
        v.pb(n%10);
            n=n/10;
    }
    for(int i=0;i<4;i++){
        if(count(v.begin(),v.end(),v[i])==1){continue;}
        else{return false;}
    }
    return true;
}

int main()
{
fastread();
int t=1;
//cin>>t;
while(t--){
    int n;
    cin>>n;
    n++;
    while(true){
        if(checker(&n)){
            cout<<n<<endl;
            break;
        }
        else{
            n++;
            continue;
        }
    }
}
return 0;
}
