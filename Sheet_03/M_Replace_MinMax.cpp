    //https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M
    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n;
        cin >> n;
        vector <int> ar(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        int mn = INT_MAX;
        int mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (ar[i] < mn)
            {
                mn = ar[i];
            }
            if (ar[i] > mx)
            {
                mx = ar[i];
            }
        }
        for(int i=0; i<n; i++){
            if(ar[i]==mn){
                ar[i] = mx;
            }
            else if(ar[i]==mx){
                ar[i] = mn;
            }
        }
        for(int i=0; i<n; i++){
            if(i==n-1){
                cout << ar[i];
            }
            else{

            cout << ar[i]<<" ";
            }
        }



        return 0;
    }