//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t ;
    while (t--)
    {
        int n;
        cin >> n;
        long long int fact=1;
        for(int i=2; i<=n; i++){
            fact *= i;
        }
        cout << fact<<endl;
    }
    
    return 0;
}