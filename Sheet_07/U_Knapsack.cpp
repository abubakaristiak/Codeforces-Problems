// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/U

#include<bits/stdc++.h>
using namespace std;
int knapsack(int n, int W, vector<int>& weight, vector<int>& value){
    //base case
    if(n == 0 || W==0) return 0;

    if(weight[n-1] <= W){
        int op1 = knapsack(n-1,W-weight[n-1], weight, value) + value[n-1];
        int op2 = knapsack(n-1, W, weight, value);
        return max(op1, op2);
    }
    else{
        int op2 = knapsack(n-1, W, weight, value);
        return op2;
    }
}
int main()
{
    int n, W;
    cin >> n >> W;
    vector<int> weight(n), value(n);

    for(int i=0; i<n; i++){
        cin >> weight[i] >> value[i];
    }
    cout << knapsack(n,W, weight, value) << endl;
    return 0;
}