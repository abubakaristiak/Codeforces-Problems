//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/H
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

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(ar[i]>ar[j]){
                swap(ar[i], ar[j]);
            }
        }
    }

    for(int i=0; i<n; i++){
        cout << ar[i] << " ";
    }
    
}