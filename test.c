#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int arr[6] = {3, 1, 2, 5, 6, 7};

int compare(const void *a, const void *b){
    return (*(int *)a - *(int *)b);
}

int gcd(int a, int b){
    while(b != 0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}

int main(){
    int a = 3, b = 15;
    qsort(arr, 6, sizeof(int), compare);
    for (int i = 0; i < 6; i++)
        printf("%d ", arr[i]);
    printf("\n%d\n", gcd(a, b));
    printf("%d", (a * b) / gcd(a, b));
}
