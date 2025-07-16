#include<stdio.h>
int main(){
    int a, b;
    int i, result, n
    ;
    scanf("%d%d%d", &a, &b, &n);
    for (i = 0; i < n; i++){
        a = a % b;
        a *= 10;
        result =a / b;
    }
    printf("%d\n", result);
}