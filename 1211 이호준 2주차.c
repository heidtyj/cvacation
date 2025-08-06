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
