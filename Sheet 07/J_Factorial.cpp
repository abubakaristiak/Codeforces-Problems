//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/J
#include<bits/stdc++.h>
using namespace std;
long long int fact(long long int n){
    if(n==0){
        return 1;
    }
    long long int ans = fact(n-1);
    return ans*n;
}
int main()
{
    int n;
    cin >> n;
    long long int ans = fact(n);
    cout << ans << endl;
    return 0;
}