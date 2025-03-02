//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int i=0; i<n; i++){
        cin >> ar[i];
    }
    int mn = *min_element(ar.begin(),ar.end());
    int count = 0; 
    for(int i=0; i<n; i++){
            if(ar[i] == mn){
                count++;
            }
    }
    if(count%2 !=0){
        cout << "Lucky" << endl;
    }
    else{
        cout << "Unlucky" << endl;
    }
    return 0;
}