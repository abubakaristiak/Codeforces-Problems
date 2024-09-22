// https://codeforces.com/problemset/problem/158/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, score;
    cin >> n >> score;
    vector<int> v;
    for(int i=0; i<n; i++){
        int val; 
        cin >> val;
        v.push_back(val);
    }

    int count_score = 0;
    for(int i=0; i<n; i++){
        if(v[i] >= v[score-1] && v[i]>0){
            count_score++;
        }
    }
    cout << count_score << endl;
    return 0;
}