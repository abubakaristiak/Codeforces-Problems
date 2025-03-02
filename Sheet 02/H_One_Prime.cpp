//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int flag = 0; 
    for(int i=2; i<=n-1; i++){
        if(n%i==0){
            flag = 1;
        }
    }
    if(flag==0){
        cout << "YES"<<endl;
    }
    else{
        cout << "NO"<<endl;
    }
    return 0;
}