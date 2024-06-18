//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y
// #include<stdio.h>
// int main()
// {
//     long long int a,b,c,d; 
//     scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
//     long long int mul = a*b*c*d;
//     long long int last_2_digit = mul%100;
    
//     if(last_2_digit == 0){
//        printf("00\n");
//     }
//     else if(last_2_digit<10){
//         printf("0%lld\n", last_2_digit);
//     }
//     else{
//         printf("%lld\n", last_2_digit);
//     }
//     return 0;
// }

#include<stdio.h>
int main()
{
    long long int a,b,c,d; 
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    long long int mul = (((a%100) * (b%100) * (c%100) * (d%100)) %100 );
    
    if(mul <10){
        printf("0%lld", mul);
    }
    else{
        printf("%d", mul);
    }
    return 0;
}