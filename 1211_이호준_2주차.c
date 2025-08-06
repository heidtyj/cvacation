//1110(v)
#include <stdio.h>

int main() {
    int n, original, count = 0;
    scanf("%d", &n);
    original = n;
    do {
        int tens = n / 10;
        int ones = n % 10;
        int sum = tens + ones;
        n = (ones * 10) + (sum % 10);
        count++;
    } while (n != original);
    printf("%d\n", count);
    return 0;
}

//2908(v)
#include <stdio.h>

int reverse(int num);

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int rev_a = reverse(a);
    int rev_b = reverse(b);

    if (rev_a > rev_b)
        printf("%d\n", rev_a);
    else
        printf("%d\n", rev_b);
    return 0;
}

int reverse(int num) {
    int rev = 0;
    while (num > 0) {
        rev = rev * 10 + (num % 10);
        num /= 10;
    }
    return rev;
}

//2869(v)
#include <stdio.h>

int main() {
    int A, B, V;
    int day;
    scanf("%d %d %d", &A, &B, &V);
    day = (V - B) / (A - B);

    if ((V - B) % (A - B) != 0) {
        day++;
    }
    printf("%d\n", day);
    return 0;
}

//2941(s)
#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    scanf("%s", str);
    int count = 0;
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == 'c' && (str[i+1] == '=' || str[i+1] == '-')) {
            i += 2;
        } else if (str[i] == 'd') {
            if (str[i+1] == 'z' && str[i+2] == '=') {
                i += 3;
            } else if (str[i+1] == '-') {
                i += 2;
            } else {
                i++;
            }
        } else if ((str[i] == 'l' && str[i+1] == 'j') || (str[i] == 'n' && str[i+1] == 'j')) {
            i += 2;
        } else if ((str[i] == 's' && str[i+1] == '=') || (str[i] == 'z' && str[i+1] == '=')) {
            i += 2;
        } else {
            i++;
        }
        count++;
    }
    printf("%d\n", count);
    return 0;
}


//10870(v)
#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) return 0;
    else if (n == 1) return 1;
    else return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", fibonacci(n));
    return 0;
}

//2609(v)
#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    int GCD = gcd(A, B);
    int LCM = (A * B) / GCD;

    printf("%d\n%d\n", GCD, LCM);
    return 0;
}

//5622(v)
#include <stdio.h>
#include <string.h>

int main() {
    char str[16];
    scanf("%s", str);

    int time = 0;
    for (int i = 0; i < strlen(str); i++) {
        char c = str[i];
        if (c >= 'A' && c <= 'C') time += 3;
        else if (c >= 'D' && c <= 'F') time += 4;
        else if (c >= 'G' && c <= 'I') time += 5;
        else if (c >= 'J' && c <= 'L') time += 6;
        else if (c >= 'M' && c <= 'O') time += 7;
        else if (c >= 'P' && c <= 'S') time += 8;
        else if (c >= 'T' && c <= 'V') time += 9;
        else if (c >= 'W' && c <= 'Z') time += 10;
    }
    printf("%d\n", time);
    return 0;
}

//10828(s)
#include <stdio.h>
#include <string.h>
#define MAX 10000

int stack[MAX];
int top_idx = -1;
void push(int x);
int pop();
int size();
int empty();
int top();

int main() {
    int n;
    scanf("%d", &n);
    char cmd[10];
    int x;

    for (int i = 0; i < n; i++) {
        scanf("%s", cmd);
        if (strcmp(cmd, "push") == 0) {
            scanf("%d", &x);
            push(x);
        } else if (strcmp(cmd, "pop") == 0) {
            printf("%d\n", pop());
        } else if (strcmp(cmd, "size") == 0) {
            printf("%d\n", size());
        } else if (strcmp(cmd, "empty") == 0) {
            printf("%d\n", empty());
        } else if (strcmp(cmd, "top") == 0) {
            printf("%d\n", top());
        }
    }
    return 0;
}

void push(int x) {
    stack[++top_idx] = x;
}

int pop() {
    if (top_idx == -1) return -1;
    return stack[top_idx--];
}

int size() {
    return top_idx + 1;
}

int empty() {
    return (top_idx == -1) ? 1 : 0;
}

int top() {
    if (top_idx == -1) return -1;
    return stack[top_idx];
}

//1100(v)
#include <stdio.h>

int main() {
    char board[8][9];  // 8글자 + null 문자
    int count = 0;

    for (int i = 0; i < 8; i++) {
        scanf("%s", board[i]);
    }
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            // (i + j) % 2 == 0 이면 흰 칸
            if ((i + j) % 2 == 0 && board[i][j] == 'F') {
                count++;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}

//1173(v)
#include <stdio.h>

int main() {
    int N, M, m, T, R;
    int time = 0;
    int now = m;
    int done = 0;
    scanf("%d %d %d %d %d", &N, &m, &M, &T, &R);

    if (m + T > M) {
        printf("-1\n");
        return 0;
    }

    while (done < N) {
        if (now + T <= M) {
            now += T;
            done++;
        } else {
            now -= R;
            if (now < m) now = m;
        }
        time++;
    }
    printf("%d\n", time);
    return 0;
}

//1233(v)
#include <stdio.h>

int main() {
    int S1, S2, S3;
    scanf("%d %d %d", &S1, &S2, &S3);
    int maxCount = 0;
    int result = 0;
    int sum[121] = {0};  // 20 + 20 + 40 = 80 → 넉넉하게 120까지

    for (int i = 1; i <= S1; i++) {
        for (int j = 1; j <= S2; j++) {
            for (int k = 1; k <= S3; k++) {
                sum[i + j + k]++;
            }
        }
    }
    for (int i = 3; i <= S1 + S2 + S3; i++) {
        if (sum[i] > maxCount) {
            maxCount = sum[i];
            result = i;
        }
    }
    printf("%d\n", result);
    return 0;
}

//1003(s)
#include<stdio.h>

int arr[2];

int fibonacci(int n) {
    if (n == 0) {
        arr[0] += 1;
        return 0;
    } else if (n == 1) {
        arr[1] += 1;
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main() {
    int n, i, num;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        arr[0] = 0;
        arr[1] = 0;
        scanf("%d", &num);
        fibonacci(num);
        printf("%d %d\n", arr[0], arr[1]);
    }
    return 0;
}

//2747(v)
#include <stdio.h>

int main() {
    int n;
    int dp[46]; 
    scanf("%d", &n);

    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }
    printf("%d\n", dp[n]);
    return 0;
}

//10996(v)
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        // 첫 번째 줄 (홀수 위치에 별)
        for (int j = 0; j < N; j++) {
            if (j % 2 == 0)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");

        // 두 번째 줄 (짝수 위치에 별)
        for (int j = 0; j < N; j++) {
            if (j % 2 == 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

//2581(v)
#include <stdio.h>

int is_prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int M, N;
    int sum = 0;
    int min = -1;

    scanf("%d %d", &M, &N);
    for (int i = M; i <= N; i++) {
        if (is_prime(i)) {
            sum += i;
            if (min == -1) min = i;
        }
    }
    if (min == -1)
        printf("-1\n");
    else {
        printf("%d\n%d\n", sum, min);
    }
    return 0;
}

//1676(s)
#include <stdio.h>

int main() {
    int N;
    int count = 0;
    scanf("%d", &N);

    for (int i = 5; i <= N; i *= 5) {
        count += N / i;
    }
    printf("%d\n", count);
    return 0;
}

//11653(v)
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            printf("%d\n", i);
            n /= i;
        }
    }
    if (n > 1) {
        printf("%d\n", n);
    }
    return 0;
}

