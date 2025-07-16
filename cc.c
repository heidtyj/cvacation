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