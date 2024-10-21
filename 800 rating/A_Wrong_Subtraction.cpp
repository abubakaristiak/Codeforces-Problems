//https://codeforces.com/problemset/problem/977/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,k;
    cin>> n >> k;

    while (k--){
        int val = n%10;
        if(val>0) n=n-1;
        if(val==0) n=n/10;
    }
    cout << n << endl;
    
    
    
    return 0;
}