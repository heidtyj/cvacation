#include<stdio.h>
/*
int main(){
    int a, b, i, c;
    scanf("%d %d", &a, &b);
    for (i = 2; i <= a > b ? b : a; i++){
        if (a % i == 0 && b % i == 0){
            c = i;
        }
    }
    printf("%d", i);
    return 0;
}
*/
int gcd(int a, int b);
int gcd2(int a, int b);
 
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", gcd2(a, b));
    return 0;
}

int gcd(int a, int b){
    while(a != b){
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}

int gcd2(int a, int b){
    if(b == 0){
        return a;
    }
    return gcd2(b, a%b);
}