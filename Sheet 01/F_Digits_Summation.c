//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/F
#include<stdio.h>
int main()
{
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    long long int c = a%10;
    long long int d = b%10;
    long long int sum = c+d;
    printf("%lld", sum);
    return 0;
}