#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int cnt = 0, N;
    scanf("%d", &N);
    int num = 666;
    while(1){
        char s[10];
        sprintf(s, "%d", num);
        if (strstr(s, "666") != NULL){
            cnt++;
        }
        if (cnt == N){
            printf("%d\n", num);
            break;
        }
        num++;
    }
}
