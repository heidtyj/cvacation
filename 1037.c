#include <stdio.h>
int main(){
	int n, i, maxNum = -1, minNum = 1000001;
    int result;
    int arr[50];
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d", arr[i]);
    }
    for (i = 0; i < n; i++){
        if (arr[i] > maxNum) maxNum = arr[i];
        if (arr[i] < minNum) minNum = arr[i];
    }
    result = maxNum * minNum;
    printf("%d\n", result);2
	return 0;
}