#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL));
#define pb push_back
#define pf push_front
#define eb emplace_back
#define loop(i,n) for(ll i=0;i<(n);i++)
#define FOR(i,a,b) for(ll i=(a);i<=(b);i++)
#define FORD(i,a,b) for(ll i=(a);i>=(b);i--)
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
using namespace std;
template <typename... T>
void read(T &...args) {
((cin >> args), ...);
}
/*****READ CONTAINER****/
template <typename T>
void readContainer(T &t) {
for (auto &e : t) {
read(e);
}
}
/******PRINT CONTAINER******/
template <typename... T>
void write(string delimiter, T &&...args) {
((cout << args << delimiter), ...);
}
template <typename T>
void writeContainer(string delimiter, T &t) {
for (const auto &e : t) {
write(delimiter, e);
}
write("\n");
}
/******DEBUGGER******/
#define deb(...) logger(#__VA_ARGS__,__VA_ARGS__)
template<typename ...Args>
void logger(string vars, Args&&... values) {
cout << vars << " = ";
string delim = "";
(..., (cout << delim << values, delim= ", "));
}
/*--------------------------------------------------*/
bool teller_x(ll sx,ll ex,char* a1){
    if(sx > ex){
        *a1 = 'W';
    }
    else if(sx == ex){
        *a1 = '\0';
    }
    else if(sx < ex){
        *a1 = 'E';
    }
}
bool teller_y(ll sy,ll ey,char* a2){
    if(sy > ey){
        *a2 = 'S';
    }
    else if(sy == ey){
        *a2 = '\0';
    }
    else if(sy < ey){
        *a2 = 'N';
    }
}
int main()
{
fastread();
    ll n;
    cin>>n;
    ll sx,sy,ex,ey;
    cin>>sx>>sy>>ex>>ey;
    char a1='\0',a2='\0';
    if(sx == ex && sy == ey){
        cout<<0<<endl;
        return 0;
    }
    if(sx > ex){
        a1 = 'W';
    }
    else if(sx < ex){
        a1 = 'E';
    }
    if(sy > ey){
        a2 = 'S';
    }
    else if(sy < ey){
        a2 = 'N';
    }
    ll t = 0;
    while(n--){
        char a;
        cin>>a;
        t++;
        if(a == a1){
    if(a == 'W'){
        sx--;
    }
    else if(a == 'E'){
        sx++;
    }
        }
        else if(a == a2){
            if(a == 'N'){
        sy++;
    }
    else if(a == 'S'){
        sy--;
    }
        }
        //deb(sx,sy);cout<<endl;
        if(sx == ex && sy == ey){
            cout<<t<<endl;
            return 0;
            //break;
        }
        teller_x(sx,ex,&a1);
        teller_y(sy,ey,&a2);
    }
    cout<<-1<<endl;
return 0;
}
