//https://codeforces.com/problemset/problem/160/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    vector<int> v(n);
    int sum=0;

    for(int i=0; i<n; i++){
        cin >> v[i];
        sum+=v[i];
    }
    sort(v.rbegin(), v.rend());
    
    int sum2=0, cnt=0;
    for(int i=0; i<n; i++){
        sum2+=v[i];
        cnt++;
        if(sum2>sum-sum2){
            break;
        }
    }
    cout << cnt << endl;
    return 0;
}