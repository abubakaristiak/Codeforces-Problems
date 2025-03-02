//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/U
#include<stdio.h>
int main()
{
    double a;
    scanf("%lf", &a);

    int integer_part = (int) a;
    float decimal_part = (float)a - integer_part;
    if(a==integer_part){
        printf("int %d", integer_part);
    }
    else{
        printf("float %d %.3f",integer_part, decimal_part);
    }
    return 0;
}