#include<stdio.h>
#include<string.h>
#define MAX 102
char stack[MAX];
 
int main() {
	int top = -1, i;
	char s[MAX];
	fgets(s, MAX, stdin);
	while (strcmp(s, ".\n")) {
		for (i = 0; i < strlen(s); i++) {
			if (s[i] == '(') {
				stack[++top] = s[i];
			}
			else if (s[i] == ')') {
				if (stack[top--] != '(')
					break;
			}
			else if (s[i] == '[') {
				stack[++top] = s[i];
			}
			else if (s[i] == ']') {
				if (stack[top--] != '[')
					break;
			}
		}
		if (i != strlen(s) || top != -1)
			printf("no\n");
		else
			printf("yes\n");
		top = -1;
		fgets(s, MAX, stdin);
	}
	return 0;
}