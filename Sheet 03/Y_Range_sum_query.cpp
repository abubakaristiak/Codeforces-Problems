//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin >> n>>q;
    vector<int>ar(n);
    for(int i=0; i<n;i++){
        cin >> ar[i];
    }


    vector<long long int> pre(n);
    pre[0] = ar[0];
    for(int i=1; i<n;i++){
        pre[i] = pre[i-1]+ar[i];
    }
    
    for(int i=1; i<=q; i++){
        int l,r;
        cin >> l>>r;
        l--;
        r--;
        long long int sum = 0; 
        if(l == 0){
            sum = pre[r];
        }
        else{

            sum = pre[r]-pre[l-1];
        }
        
        cout << sum<<endl;
    }
    return 0;
}

