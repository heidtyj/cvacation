#include <stdio.h>
#include <stdlib.h>

struct Student {
    int id;
    char name[10];
    int arr[2];
};

int main() {
    int n, max = -1;
    scanf("%d", &n);
    struct Student p[10001];
    for (int i = 0; i < n; i++) {
        scanf("%d", &p[i].id);
        scanf("%9s", p[i].name);
        for (int k = 0; k < 2; k++) {
            scanf("%d", &p[i].arr[k]);
        }
    }
    for (int j = 0; j < n; j++) {
        int num = p[j].arr[0] + p[j].arr[1];
        if (num > max) {
            max = num;
        }
    }
    printf("%d", max);
    return 0;
}
