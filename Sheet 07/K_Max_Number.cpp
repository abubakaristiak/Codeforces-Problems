//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/K
#include<bits/stdc++.h>
using namespace std;
int fun(int ar[], int n, int i){
    if(i==n){
        return INT_MIN;
    }
    int mx = fun(ar,n, i+1);
    if(ar[i] > mx){
        return ar[i];
    }
    else{
        return mx;
    }
}
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for(int i=0; i<n; i++){
        cin >> ar[i];
    }
    int mx = fun(ar,n,0);
    cout << mx << endl;
    return 0;
}