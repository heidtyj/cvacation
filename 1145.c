#include<stdio.h>
int main(){
    int arr[5] = {};
    int cnt = 0, i, j;
    for(i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }
    for (i = 0; ;i++){
        for (j = 0; j < 5; j++){
            if (arr[j] % i == 0){
                cnt++;
            }
        }
        if (cnt >= 3){
            printf("%d\n", i);
            break;
        }
        else{
            cnt = 0;
        }
    }
    return 0;
}