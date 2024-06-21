#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for(int i=2; i<n; i++){
        if(n%i == 1 && n%i ==n){
            cout << i << " ";
        }
    }
    return 0;
}