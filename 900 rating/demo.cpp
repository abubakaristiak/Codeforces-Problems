#include<bits/stdc++.h>
#define ll long long
#define pi pair<ll, ll>
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<>())
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define cyes cout << "Yes\n"
#define cno cout << "No\n"
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
 
 
bool isPower(ll n){
    return (n & (n-1))==0;
}
int main() {
    int t; cin>> t;
    while(t--){
        ll n; cin >> n;
        if(isPower(n)){
            no;
        }else yes;
       
    }
 
    return 0;
}