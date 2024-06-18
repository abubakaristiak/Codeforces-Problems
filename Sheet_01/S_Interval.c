//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/S
#include<stdio.h>
int main()
{
    float n;
    scanf("%f", &n);
    if(n>=0 && n<=25){
        printf("Interval [0,25]");
    }

    else if(n>25 && n<=50){
        printf("Interval (25,50]");
    }

    else if(n>50 && n<=75){
        printf("Interval (50,75]");
    }

    else if(n>75 && n<=100){
        printf("Interval (75,100]");
    }

    else{
        printf("Out of Intervals");
    }
    return 0;
}