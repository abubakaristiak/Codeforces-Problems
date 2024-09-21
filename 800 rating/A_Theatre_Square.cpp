#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a,flagstones_arm1,flagstones_arm2;
    cin >> n >> m >> a;

    if(n%a == 0) flagstones_arm1 = n/a;
    else flagstones_arm1 = n/a + 1;

    if(m%a == 0) flagstones_arm2 = m/a;
    else flagstones_arm2  = m/a + 1;

    long long int total_flagstones = flagstones_arm1 * flagstones_arm2;
    cout << total_flagstones<< endl;
    return 0;
}