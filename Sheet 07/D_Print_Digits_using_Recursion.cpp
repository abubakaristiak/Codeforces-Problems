//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/D
#include<bits/stdc++.h>
using namespace std;
void fun(int n){
    if(n==0) return;
    int x = n%10;
    fun(n/10);
    cout << x << " ";
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        fun(n);
        if(n==0){
            cout <<"0";
        }
        cout << endl;
          
    }
    
    return 0;
}