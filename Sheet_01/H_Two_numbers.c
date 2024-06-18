//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/H
#include<stdio.h>
#include<math.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    float f = (float)a/b;
    printf("floor %d / %d = %d\n", a, b, (int)floor(f));
    printf("ceil %d / %d = %d\n", a, b, (int)ceil(f));
    printf("round %d / %d = %d\n", a, b, (int)round(f));
    // printf("%f", f);

    return 0;
}