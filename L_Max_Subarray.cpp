//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/L  
//pending
#include<bits/stdc++.h>
using namespace std;
void printMax_element_formSubarray(vector<int>& ar, int n){
    vector<int> store_subarray_mx;
    for(int i=0; i<n;i++){
        for(int j=i; j<n;j++){
            int mx = INT_MIN;
            for(int k=i; k<=j; k++){
                mx = max(mx, ar[k]);
            }
            store_subarray_mx.push_back(mx);
            
        }
    }
    for(int val: store_subarray_mx){
        cout << val <<" ";
    }
    cout <<endl;
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector <int> ar(n);
        for(int i=0; i<n; i++){
            cin >> ar[i];
        }
        printMax_element_formSubarray(ar, n);
    }
    
    return 0;
}