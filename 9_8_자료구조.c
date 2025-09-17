#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    int* arr = (int*)malloc(sizeof(int));
    if (arr == NULL){
        printf("할당 실패");
        return 1;
    }
    for (int i = 0; i< n; i++){
        arr[i] = i + 1;
        printf("%d", arr[i]);
    }
    free(arr);
    return 0;
}

//과제
//1
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *arr;
    int sum = 0;
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    printf("%d개의 정수 입력: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("합계: %d\n", sum);
    free(arr);
    return 0;
}
//2
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int n, uniqueCount = 0;
    printf("정수 개수 입력: ");
    scanf("%d", &n);
    int *arr = malloc(n * sizeof(int));
    int *unique = malloc(n * sizeof(int));
    printf("%d개의 정수 입력: ", n);
    for (int i = 0; i < n; i++) 
        scanf("%d", &arr[i]);
    for (int i = 0; i < n; i++) {
        bool dup = false;
        for (int j = 0; j < uniqueCount; j++) {
            if (arr[i] == unique[j]) {
                 dup = true; break; 
            }
        }
        if (!dup) 
            unique[uniqueCount++] = arr[i];
    }
    unique = realloc(unique, uniqueCount * sizeof(int));
    printf("중복 제거 결과: ");
    for (int i = 0; i < uniqueCount; i++) 
        printf("%d ", unique[i]);
    printf("\n");
    free(arr);
    free(unique);
    return 0;
}

//3
#include <stdio.h>
#include <stdlib.h>

int main() {
    int* evenArr = NULL;
    int input;
    int count = 0;
    printf("최대 15개의 정수 입력:\n");
    for (int i = 0; i < 15; i++) {
        scanf("%d", &input);
        if (input % 2 == 0) {
            int *temp = (int *)realloc(evenArr, (count + 1) * sizeof(int));
            evenArr = temp;
            evenArr[count++] = input;
        }
    }
    printf("짝수만 출력: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", evenArr[i]);
    }
    printf("\n");
    free(evenArr);
    return 0;
}
//4
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STR 10
#define MAX_LEN 100

int main() {
    char *strings[MAX_STR];
    int count = 0;
    printf("최대 10개의 문자열 입력 (종료: end):\n");
    while (count < MAX_STR) {
        char buffer[MAX_LEN];
        scanf("%s", buffer);
        strings[count] = (char *)malloc(strlen(buffer) + 1);
        strcpy(strings[count], buffer);
        count++;
    }
    char *longest = strings[0];
    for (int i = 1; i < count; i++) {
        if (strlen(strings[i]) > strlen(longest)) {
            longest = strings[i];
        }
    }
    printf("가장 긴 문자열: %s\n", longest);

    for (int i = 0; i < count; i++) {
        free(strings[i]);
    }
    return 0;
}
