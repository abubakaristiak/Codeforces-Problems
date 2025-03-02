//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/O
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    if(n==1){
        cout << 0 <<endl;
        return 0;
    }
    else if(n==2){
        cout << 1 <<endl;
        return 0;
    }
    long long int fibo_1=0;
    long long int fibo_2 = 1;
    long long int fibo;
    for(int i=3; i<=n; i++){
        fibo = fibo_1+fibo_2;
        fibo_1 = fibo_2;
        fibo_2 = fibo;
    }
    cout << fibo<<endl;
    return 0;
}