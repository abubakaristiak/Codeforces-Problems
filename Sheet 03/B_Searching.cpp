//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n];
    int ans = -1;
    for(int i=0; i<n; i++){
        cin >> ar[i];
    }
    int x;
    cin >> x;

    for(int i=0; i<n; i++){
        if(ar[i]==x){
            ans = i;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}