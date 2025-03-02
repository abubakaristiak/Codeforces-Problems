//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for(int i=0; i<n; i++){
        cin >> ar[i];
    }

    int mn = INT_MAX;
    int ind = 0;
    for(int i=0; i<n; i++){
        if(ar[i]<mn){
            mn = ar[i];
            ind = i+1;
        }
    }
    cout << mn <<" " <<ind << endl;
}