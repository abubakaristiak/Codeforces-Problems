//https://codeforces.com/problemset/problem/486/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long int n;
    cin >> n;

    if(n%2==0){
        cout << n/2 << endl;
    }
    else{
        cout << (n/2+1)*-1;
    }
    return 0;
}