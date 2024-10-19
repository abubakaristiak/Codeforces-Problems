//https://codeforces.com/problemset/problem/617/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    if(n%5==0){
        cout << n/5 << endl;
    }
    else cout<< n/5+1 << endl;
    return 0;
}