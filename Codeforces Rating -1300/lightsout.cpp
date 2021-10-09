//code given by Akshay Pratap Singh
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
void chnager(ll a[3][3],ll row, ll col){
    a[row][col]=a[row][col]^1;
    ll up=-5,down=-5,left=-5,right=-5;
    if(row+1 <= 2){
        down=row+1;
    }
    if(row -1 >= 0){
        up=row-1;
    }
    if(col + 1 <= 2){
        right=col+1;
    }
    if(col - 1 >= 0){
        left= col -1;
    }
    //four directions to make change
    if(right != -5){
        a[row][right]=a[row][right]^1;
    }
    if(left != -5){
        a[row][left]=a[row][left]^1;
    }
    if(up != -5){
        a[up][col]=a[up][col]^1;
    }
    if(down != -5){
        a[down][col]=a[down][col]^1;
    }
}

int main()
{
fastread();
int t=1;
//cin>>t;
while(t--){
    ll a[3][3];
    loop(i,3){
        loop(j,3){a[i][j]=1;}
    }
    loop(i,3){
        loop(j,3){
            ll data;
            cin>>data;
            data=data%2;
            while(data--){
                chnager(a,i,j);
            }
        }
    }
    loop(i,3){
        loop(j,3){cout<<a[i][j];}
        cout<<endl;
    }


}
return 0;
}
