/*
1009
#include <stdio.h>

int main()
{
	int n; 
	scanf("%d", &n); 
	for (int i = 0; i < n; i++){
		int a, b;
		scanf("%d %d", &a, &b); 
		int task = a;
		for (int j = 1; j < b; j++) {
			task = task * a %10;  
		}
		if (task % 10== 0) 
			printf("%d\n", 10);
		else  
			printf("%d\n", task % 10);
	}
}

1145
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

1037
#include <stdio.h>

int main(){
	int n, i, maxNum = -1, minNum = 1000001;
    int result;
    int arr[50];
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++){
        if (arr[i] > maxNum) maxNum = arr[i];
        if (arr[i] < minNum) minNum = arr[i];
    }
    result = maxNum * minNum;
    printf("%d\n", result);
	return 0;
}

1312(silver)
#include <stdio.h>

int main()
{
	int n; 
	scanf("%d", &n); 
	for (int i = 0; i < n; i++){
		int a, b;
		scanf("%d %d", &a, &b); 
		int task = a;
		for (int j = 1; j < b; j++) {
			task = task * a %10;  
		}
		if (task % 10== 0) 
			printf("%d\n", 10);
		else  
			printf("%d\n", task % 10);
	}
}

1032
#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    
    char result[51];
    scanf("%s", result); 
    
    char temp[51];
    for (int i = 1; i < n; i++) {
        scanf("%s", temp);
        for (int j = 0; result[j] != '\0'; j++) {
            if (result[j] != temp[j]) {
                result[j] = '?';
            }
        }
    }
    
    printf("%s\n", result);
    return 0;
}

1152
#include <stdio.h>

int main() {
    char ch;
    int count = 0;
    int in_word = 0;

    while ((ch = getchar()) != '\n' && ch != EOF) {
        if (ch == ' ') {
            if (in_word) {
                count++;
                in_word = 0;
            }
        } else {
            in_word = 1;
        }
    }
    if (in_word) {
        count++;
    }
    printf("%d\n", count);
    return 0;
}

1546
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    double scores[1000];
    double max = 0.0, sum = 0.0;

    for (int i = 0; i < n; i++) {
        scanf("%lf", &scores[i]);
        if (scores[i] > max) {
            max = scores[i];
        }
    }
    for (int i = 0; i < n; i++) {
        scores[i] = (scores[i] / max) * 100.0;
        sum += scores[i];
    }
    printf("%f\n", sum / n);
    return 0;
}

2839(silver)
#include <stdio.h>

int main() {
    int n;
    int count = 0;
    scanf("%d", &n);
    while (n >= 0) {
        if (n % 5 == 0) {
            count += n / 5;
            printf("%d\n", count);
            return 0;
        }
        n -= 3;
        count++;
    }
    printf("-1\n");
    return 0;
}

3052
#include <stdio.h>
int main() {
    int num;
    int remain[42] = {0};
    int count = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &num);
        remain[num % 42] = 1; 
    }
    for (int i = 0; i < 42; i++) {
        if (remain[i] == 1) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}

//2675
#include <stdio.h>

int main() {
    int t, r;
    char s[21];

    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %s", &r, s);
        for (int j = 0; s[j] != '\0'; j++) {
            for (int k = 0; k < r; k++) {
                printf("%c", s[j]);
            }
        }
        printf("\n");
    }
    return 0;
}
*/
