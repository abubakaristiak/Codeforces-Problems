//https://codeforces.com/contest/2014/problem/B

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while (t--)
    {
        int n,k,ans=0;
        cin>> n>>k;
        if(n%2==0){
            ans=k/2;
        }
        else{
            ans = ceil(k/2.0);
        }
        cout << (ans%2==0 ? "YES":"NO") << endl;
    }
    
    return 0;
}