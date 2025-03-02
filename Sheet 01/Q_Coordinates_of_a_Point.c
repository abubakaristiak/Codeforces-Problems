//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Q
#include<stdio.h>

int main()
{
    double x, y;
    scanf("%lf %lf", &x, &y);
    
    if (x == 0 && y == 0) {
        printf("Origem");
    }
    else if (x == 0) {
        printf("Eixo Y");
    }
    else if (y == 0) {
        printf("Eixo X");
    }
    else if (x > 0 && y > 0) {
        printf("Q1");
    }
    else if (x < 0 && y > 0) {
        printf("Q2");
    }
    else if (x < 0 && y < 0) {
        printf("Q3");
    }
    else {
        printf("Q4");
    }
    
    return 0;
}
