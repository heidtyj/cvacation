#include<stdio.h>
int main(){
    int n;
    int arr[50];
    int cnt = 0, i, j;
    int result;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for (result = 1; ;result++){
        for (j = 0; j < 5; j++){
            if (result % arr[j] == 0){
                cnt++;
            }
        }
        if (cnt >= n){
            printf("%d\n", result);
            break;
        }
        else{
            cnt = 0;
        }
    }
    return 0;
}
