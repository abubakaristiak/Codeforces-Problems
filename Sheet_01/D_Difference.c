//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/D
#include<stdio.h>
int main()
{
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    long long int x1 = (a * b);
    long long int x2 = (c * d);
    long long int result = x1-x2;
    printf("Difference = %lld", result);
    return 0;
}