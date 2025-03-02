//// Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/W

#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll input;


bool recur(ll n){
    if(n > input) return false;
    if(n == input) return true;
    return recur(n*10) || recur(n*20);
}


int main()
{
    int t;
    cin >> t;
    while (t--){
        cin >> input;
        bool flag = recur(1);  
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
          
    }
    return 0;
}