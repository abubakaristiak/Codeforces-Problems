//https://codeforces.com/problemset/problem/69/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin>>n;
    int s1=0,s2=0,s3=0;
    int ar[105][105];
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            cin>> ar[i][j];
        }
        s1+=ar[i][0];
        s2+=ar[i][1];
        s3+=ar[i][2];
    }
    if(s1==0 && s2==0 && s3==0) cout<< "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}