//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Z
#include<stdio.h>
#include<math.h>
int main()
{
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    double first_power = log (a) *b;
    double second_power = log (c) *d;
    if(first_power > second_power){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}