
//1009(b)
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

//1145(b)
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

//1037(b)
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

//1312(s)
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

//1032(b)
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

//1152(b)
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

//1546(b)
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

//2839(s)
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

//3052(b)
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

//2675(b)
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

//1978(b)
#include <stdio.h>

int main() {
    int n, num, count = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        int is_prime = 1;
        if (num < 2) {
            is_prime = 0;
        } else {
            for (int j = 2; j * j <= num; j++) {
                if (num % j == 0) {
                    is_prime = 0;
                    break;
                }
            }
        }
        if (is_prime) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}

//9012(s)
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char str[51];
        int balance = 0;
        int is_valid = 1;

        scanf("%s", str);
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] == '(') {
                balance++;
            } else if (str[i] == ')') {
                balance--;
                if (balance < 0) {
                    is_valid = 0;
                    break;
                }
            }
        }
        if (balance != 0) {
            is_valid = 0;
        }
        if (is_valid) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}

//8958(b)
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char str[81];
        scanf("%s", str);
        int score = 0;
        int combo = 0;

        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] == 'O') {
                combo++;
                score += combo;
            } else {
                combo = 0;
            }
        }
        printf("%d\n", score);
    }
    return 0;
}

//10809(b)
#include <stdio.h>

int main() {
    char s[101];
    int alpha[26];

    for (int i = 0; i < 26; i++) {
        alpha[i] = -1; 
    }
    scanf("%s", s);
    for (int i = 0; s[i] != '\0'; i++) {
        int index = s[i] - 'a';
        if (alpha[index] == -1) {
            alpha[index] = i;
        }
    }
    for (int i = 0; i < 26; i++) {
        printf("%d ", alpha[i]);
    }

    return 0;
}

//1157(b)
#include <stdio.h>

int main() {
    char s[1000001];
    int alpha[26] = {0};
    int max = 0;
    int max_index = -1;
    int same = 0;

    scanf("%s", s);
    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];
        if (ch >= 'a') ch -= 32;  // 소문자를 대문자로 바꿈
        alpha[ch - 'A']++;
    }
    for (int i = 0; i < 26; i++) {
        if (alpha[i] > max) {
            max = alpha[i];
            max_index = i;
            same = 0;
        } else if (alpha[i] == max) {
            same = 1; // 같은 최대값이 또 나옴
        }
    }
    if (same) {
        printf("?\n");
    } else {
        printf("%c\n", max_index + 'A');
    }
    return 0;
}

//2751(s)
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[1000000];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, n, sizeof(int), compare);

    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}

//4344(b)
#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int scores[1000];
        int sum = 0;
        for (int i = 0; i < N; i++) {
            scanf("%d", &scores[i]);
            sum += scores[i];
        }
        double avg = (double)sum / N;
        int count = 0;
        for (int i = 0; i < N; i++) {
            if (scores[i] > avg) count++;
        }
        double ratio = (double)count / N * 100;
        printf("%.3lf%%\n", ratio);
    }
    return 0;
}

//2750(b)
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[1000];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    qsort(arr, n, sizeof(int), compare);
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}

//2577(b)
#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int result = a * b * c;
    int count[10] = {0};

    while (result > 0) {
        int digit = result % 10;
        count[digit]++;
        result /= 10;
    }
    for (int i = 0; i < 10; i++) {
        printf("%d\n", count[i]);
    }
    return 0;
}

//1316(s)
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int count = 0;

    for (int i = 0; i < n; i++) {
        char word[101];
        int alphabet[26] = {0};
        int is_group = 1;
        scanf("%s", word);
        for (int j = 0; word[j] != '\0'; j++) {
            int now = word[j] - 'a';
            if (word[j] != word[j - 1] && j > 0) {
                if (alphabet[now]) {
                    is_group = 0;
                    break;
                }
            }
            alphabet[now] = 1;
        }
        if (is_group) count++;
    }
    printf("%d\n", count);
    return 0;
}
