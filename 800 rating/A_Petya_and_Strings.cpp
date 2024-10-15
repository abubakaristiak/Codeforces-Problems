//https://codeforces.com/problemset/problem/112/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string a,b;
    cin>>a>>b;
    int n=a.length();
    for(int i=0; i<n; i++){
        a[i]=towlower(a[i]);
        b[i]=towlower(b[i]);
    }
    if(a==b) cout<< 0 <<endl;
    else{
        for(int i=0; i<n;i++){
            if(a[i]<b[i]){
                cout << -1 <<endl;
                break;
            }
            if(a[i]>b[i]){
                cout << 1 <<endl;
                break;
            }
        }
    }

    return 0;
}