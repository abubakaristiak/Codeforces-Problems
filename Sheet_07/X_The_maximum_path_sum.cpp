//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/X

#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll row, col;
int ar[100][100];


ll maxPathSum(ll n, ll m){
    if(n==row-1 && m==col-1){
        return ar[n][m];
    }

    if(n>row-1 || m>col-1){
        return INT_MIN;
    }
    ll op1 = maxPathSum(n+1, m);
    ll op2 = maxPathSum(n, m+1);
    return ar[n][m] + max(op1, op2);
}


int main()
{
    int n,m; 
    cin >>n >> m;
    row = n, col = m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> ar[i][j];
        }
    }

    cout << maxPathSum(0,0) << endl;
    return 0;
}