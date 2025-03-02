//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ar[n];
        for(int i=0; i<n; i++){
            cin >> ar[i];
        }
        int main_sum = INT_MAX;
        for(int i=0; i<n-1;i++){
            for(int j=i+1; j<n; j++){
                int sum = ar[i]+ar[j]+j-i;
                if(sum<main_sum){
                    main_sum = sum;
                }
            }
        }
        cout << main_sum <<endl;
    }
    
    return 0;
}