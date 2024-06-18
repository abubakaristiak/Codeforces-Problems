//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d", &ar[i]);
    }

    int max = ar[0];
    for(int i=0; i<n; i++){
        if(max<ar[i]){
            max = ar[i];
        }
    }
    printf("%d", max);
    return 0;
}

// another method;
// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);

//     int max;
//     scanf("%d", &max); 

//     for (int i = 1; i < n; i++) {
//         int num;
//         scanf("%d", &num);
//         if (num > max) {
//             max = num;
//         }
//     }

//     printf("%d\n", max);
//     return 0;
// }
