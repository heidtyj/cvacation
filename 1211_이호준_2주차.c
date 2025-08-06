/*
1110(v)
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

2908(v)
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

2869(v)
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

2941(s)
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
*/

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
