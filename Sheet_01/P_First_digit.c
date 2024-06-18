//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P
#include<stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    int check = num/1000;
    if (check%2 ==0)
    {
        printf("EVEN");
    }

    else{
        printf("ODD");
    }
    
    return 0;
}