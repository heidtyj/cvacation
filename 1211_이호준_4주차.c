//1212(v)
#include <stdio.h>

int main() {
    int n, m;
    int box[50], book[300];
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) scanf("%d", &box[i]);
    for (int i = 0; i < m; i++) scanf("%d", &book[i]);
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (box[i] >= book[j]) {
            box[i] -= book[j];
            j++;
        } else {
            i++;
        }
    }
    int sum = 0;
    for (int k = 0; k < n; k++) sum += box[k];
    printf("%d\n", sum);
    return 0;
}

//2902(v)
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[101];
    scanf("%s", s);
    for (int i = 0; i < strlen(s); i++) {
        if (isupper(s[i])) {
            printf("%c", s[i]);
        }
    }
    printf("\n");
    return 0;
}

//7567(v)
#include <stdio.h>
#include <string.h>

int main() {
    char s[51];
    scanf("%s", s);
    int sum = 10;
    for (int i = 1; i < strlen(s); i++) {
        if (s[i] == s[i-1]) sum += 5;
        else sum += 10;
    }
    printf("%d\n", sum);
    return 0;
}

//4673(s)
#include <stdio.h>

int main() {
    int check[10001] = {0};
    for (int i = 1; i <= 10000; i++) {
        int n = i;
        int sum = n;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        if (sum <= 10000) check[sum] = 1; // 생성자가 있으면 체크
    }
    for (int i = 1; i <= 10000; i++) {
        if (!check[i]) printf("%d\n", i);
    }
    return 0;
}

//10821(v)
#include <stdio.h>

int main() {
    char s[101];
    scanf("%100s", s);
    int count = 1; 
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ',') count++;
    }
    printf("%d\n", count);
    return 0;
}

//1568(v)
#include <stdio.h>

int main() {
    int n, k = 0, cnt = 0;
    scanf("%d", &n);
    while (1) {
        k++;
        if (n == 0) 
            break;
        if (n < k) 
            k = 1;
        n -= k;
        cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}

//2702(v)
#include <stdio.h>

long long uclid(long long a, long long b);

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        long long a, b, G;
        scanf("%lld %lld", &a, &b);
        G = uclid(a, b);
        printf("%lld %lld\n", (a / G) * b, G); // LCM 먼저, GCD 나중
    }
}

long long uclid(long long a, long long b) {
    if (b == 0) return a;
    return uclid(b, a % b);
}


//1789(s)
#include <stdio.h>

int main() {
    long long S;
    scanf("%lld", &S);
    long long sum = 0;
    int count = 0;
    for (int i = 1; ; i++) {
        if (sum + i > S) break;
        sum += i;
        count++;
    }
    printf("%d\n", count);
    return 0;
}

//10822(v)
#include <stdio.h>

int main() {
    char s[101];
    scanf("%100s", s);
    int sum = 0;
    int num = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            num = num * 10 + (s[i] - '0');
        } else if (s[i] == ',') {
            sum += num;
            num = 0;
        }
    }
    sum += num; 
    printf("%d\n", sum);
    return 0;
}

//5618
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
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int g = arr[0];
    for (int i = 1; i < N; i++) {
        g = gcd(g, arr[i]);
    }
    for (int i = 1; i <= g; i++) {
        if (g % i == 0) printf("%d\n", i);
    }
    return 0;
}

//13410(v)
#include<stdio.h>
int main() {
	int n, k, i, num = 0, reverse = 0, num2 = 0;
	scanf("%d %d", &n, &k);
	for (i = 1; i <= k; i++) {
		num = n * i;    
		while (num) {    
			reverse = (reverse * 10) + (num % 10);
			num = num / 10;
		}
		if (num2 < reverse) {  
			num2 = reverse;
		}
		num = 0;   
		reverse = 0;
	}
	printf("%d\n", num2);
	return 0;
}

//3062
#include <stdio.h>
#include <string.h>

int is_palindrome(int num) {
    char str[20];
    sprintf(str, "%d", num);
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int reverse(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int main() {
    int N;
    scanf("%d", &N);
    if (!is_palindrome(N)) {
        printf("NO\n");
        return 0;
    }
    int sum = N + reverse(N);
    if (is_palindrome(sum)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
