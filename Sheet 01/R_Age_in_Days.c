#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int year = a/365;
    int month = (a%365)/30;
    int day = (a%365)-month*30;
    printf("%d years\n", year);
    printf("%d months\n", month);
    printf("%d days", day);
    return 0;
}