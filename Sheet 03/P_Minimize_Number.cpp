//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/P
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int ar[n];
    for(int i=0; i<n; i++){
        cin >> ar[i];
    }
    int count=0;
    bool check_even_array = true;
    while (check_even_array)
    {
        for(int i=0; i<n; i++){
            if(ar[i]%2!=0){
                check_even_array = false;
                break;
            }
        }
        if(check_even_array){
            for(int i=0; i<n;i++){
                ar[i]/=2;
            }
            ++count;
        }
    }
    
    
    cout << count << endl;
    return 0;
}