//1075(v)
#include <stdio.h>

int main() {
    int N, F;
    scanf("%d %d", &N, &F);
    N = (N / 100) * 100; 
    int i;
    for (i = 0; i < 100; i++) {
        if ((N + i) % F == 0) {
            printf("%02d\n", i);
            break;
        }
    }
    return 0;
}

//1225(v)
#include <stdio.h>

int main() {
    char A[10001], B[10001];
    scanf("%s %s", A, B);
    long long sumA = 0, sumB = 0;
    for (int i = 0; A[i] != '\0'; i++) {
        sumA += A[i] - '0';
    }
    for (int j = 0; B[j] != '\0'; j++) {
        sumB += B[j] - '0';
    }
    printf("%lld\n", sumA * sumB);
    return 0;
}

//1259(v)
#include <stdio.h>
#include <string.h>

int main() {
    char num[1001];
    while (scanf("%s", num) && !(num[0]=='0' && num[1]=='\0')) {
        int len = strlen(num);
        int i;
        int flag = 1;
        for (i = 0; i < len/2; i++) {
            if (num[i] != num[len-1-i]) {
                printf("no\n");
                flag = 0;
                break;
            }
        }
        if (flag) printf("yes\n");
    }
    return 0;
}

//1010(s)
#include <stdio.h>

long long comb(int n, int r) {
    long long res = 1;
    for (int i = 1; i <= r; i++) {
        res *= n--; 
        res /= i; 
    }
    return res;
}

int main() {
    int T, N, M;
    scanf("%d", &T);
    for (int t = 0; t < T; t++) {
        scanf("%d %d", &N, &M);
        printf("%lld\n", comb(M, N));
    }
    return 0;
}

//2231(v)
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    for (int i = N - 54; i < N; i++) {
        int sum = i;
        int temp = i;
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        if (sum == N) {
            printf("%d\n", i);
            return 0;
        }
    }
    printf("0\n");
    return 0;
}

//10989(v)
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int count[1000001] = {0};
    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num);
        count[num]++;
    }
    for (int i = 1; i <= 1000000; i++) {
        while (count[i]--) {
            printf("%d\n", i);
        }
    }
    return 0;
}

//2920(v)
#include <stdio.h>

int main() {
    int notes[8];
    int ascending = 1, descending = 1;
    for (int i = 0; i < 8; i++) {
        scanf("%d", &notes[i]);
    }
    for (int i = 0; i < 7; i++) {
        if (notes[i] != i + 1) {
            ascending = 0;
            break;
        }
    }
    for (int i = 0; i < 7; i++) {
        if (notes[i] != 8 - i) {
            descending = 0;
            break;
        }
    }
    if (ascending) {
        printf("ascending\n");
    } else if (descending) {
        printf("descending\n");
    } else {
        printf("mixed\n");
    }
    return 0;
}

//1436(s)
#include <stdio.h>
#include <string.h>

int main() {
    int N, count = 0;
    scanf("%d", &N);
    int num = 666;
    while (1) {
        char s[20];
        sprintf(s, "%d", num);
        if (strstr(s, "666") != NULL) { 
            count++;
        }
        if (count == N) {
            printf("%d\n", num);
            break;
        }
        num++;
    }
    return 0;
}

//1934(v)
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
    int T;
    scanf("%d", &T);
    while (T--) {
        int a, b;
        scanf("%d %d", &a, &b);
        int g = gcd(a, b);
        printf("%d\n", a / g * b);
    }
    return 0;
}

//2748(v)
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    long long fib[91];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= N; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    printf("%lld\n", fib[N]);
    return 0;
}

//11050(v)
#include <stdio.h>

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int N, K;
    scanf("%d %d", &N, &K);
    int ans = factorial(N) / (factorial(K) * factorial(N - K));
    printf("%d\n", ans);
    return 0;
}

//1427(s)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return *(char*)b - *(char*)a; // 내림차순
}

int main() {
    char num[11];
    scanf("%s", num);
    qsort(num, strlen(num), sizeof(char), compare);
    printf("%s\n", num);
    return 0;
}

//2587(v)
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}
int main() {
    int arr[5], sum = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    qsort(arr, 5, sizeof(int), compare);
    printf("%d\n%d\n", sum / 5, arr[2]); 
    return 0;
}

//25305(v)
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return *(int*)b - *(int*)a;
}

int main() {
    int N, k;
    scanf("%d %d", &N, &k);
    int arr[1000];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    qsort(arr, N, sizeof(int), compare);
    printf("%d\n", arr[k - 1]); 
    return 0;
}

//9506(v)
#include <stdio.h>

int main() {
    int n;
    while (1) {
        scanf("%d", &n);
        if (n == -1) break;
        int sum = 0;
        for (int i = 1; i < n; i++) {
            if (n % i == 0) sum += i;
        }
        if (sum == n) {
            printf("%d = ", n);
            for (int i = 1; i < n; i++) {
                if (n % i == 0) {
                    printf("%d", i);
                    if (i != n / 2) printf(" + "); // 마지막은 + 안 붙임
                }
            }
            printf("\n");
        } else {
            printf("%d is NOT perfect.\n", n);
        }
    }
    return 0;
}

//1475(s)
#include <stdio.h>
#include <string.h>

int main() {
    char room[1000001];
    int cnt[10] = {0};
    scanf("%s", room);
    for (int i = 0; room[i]; i++) {
        int num = room[i] - '0';
        if (num == 6 || num == 9) {
            cnt[6]++; 
        } else {
            cnt[num]++;
        }
    }
    cnt[6] = (cnt[6] + 1) / 2;
    int max = 0;
    for (int i = 0; i < 10; i++) {
        if (cnt[i] > max) max = cnt[i];
    }
    printf("%d\n", max);
    return 0;
}

//1292(v)
#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    int sum = 0;
    int count = 0; 
    for (int num = 1; count < M; num++) {
        for (int i = 0; i < num; i++) {
            count++;
            if (count >= N && count <= M)
                sum += num;
        }
    }
    printf("%d\n", sum);
    return 0;
}

//1357(v)
#include <stdio.h>

int reverse(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    int sum = reverse(A) + reverse(B);
    printf("%d\n", reverse(sum));
    return 0;
}

//4150(v)
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n == 0) {
        printf("0\n");
        return 0;
    } else if (n == 1) {
        printf("1\n");
        return 0;
    }
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    printf("%d\n", c);
    return 0;
}

//10826(s)
#include <stdio.h>

int fib(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fib(n-1) + fib(n-2);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", fib(n));
    return 0;
}
