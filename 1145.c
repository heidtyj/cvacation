#include<stdio.h>
int main(){
    int arr[5];
    int cnt = 0, i, j;
    int result;
    for(i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }
    for (result = 1; ;result++){
        for (j = 0; j < 5; j++){
            if (result % arr[j] == 0){
                cnt++;
            }
        }
        if (cnt >= 3){
            printf("%d\n", result);
            break;
        }
        else{
            cnt = 0;
        }
    }
    return 0;
}
