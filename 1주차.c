/*
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
*/
//1152
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
