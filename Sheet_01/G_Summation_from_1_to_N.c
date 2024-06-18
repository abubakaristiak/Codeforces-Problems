//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/G
#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    long long int sum = (long long int)n * (n + 1) / 2;
    printf("%lld", sum);
    return 0;
}
