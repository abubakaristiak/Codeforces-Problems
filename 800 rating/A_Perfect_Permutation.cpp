//https://codeforces.com/problemset/problem/233/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>> n;
    if(n%2!=0){
        cout << -1 << endl;
        return 0;
    }

    
    vector<int>P(n+1);
    for(int i=1; i<=n; i++){
        P[i] = i;
    }
    for(int i=1; i<n; i+=2){
        swap(P[i],P[i+1]);
    }
    for(int i=1; i<=n; i++){
        cout << P[i] << " ";
    }
    cout << '\n';
    return 0;
}