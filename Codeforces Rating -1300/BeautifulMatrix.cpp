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
    int a[5][5];
    int A=0,B=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
            if(a[i][j]==1){
                A=i;B=j;
            }
        }
    }
    int xtravel=min(abs(A-2),5-abs(A-2));
    int ytravel=min(abs(B-2),5-abs(B-2));
    cout<<xtravel+ytravel<<"\n";

}
return 0;
}
