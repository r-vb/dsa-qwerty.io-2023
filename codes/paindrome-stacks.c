/* palindrome using stacks */

#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* stack;
int top = -1;

void push(char ele)
{
	stack[++top] = ele;
}

char pop()
{
	return stack[top--];
}

int Palindrome(char str[])
{
	int len = strlen(str);
	stack = (char*)malloc(len*sizeof(char));

	int i, mid = len / 2;

	for (i = 0; i < mid; i++) {
		push(str[i]);
	}

	if (len % 2 != 0) {
		i++;
	}

	while (str[i] != '\0') {
		char data = pop();

		if (data != str[i])
			return 0;
		i++;
	}

	return 1;
}

int main()
{
	char str[10] = "raddar";

	if (Palindrome(str)) {
		printf("It is palindrome.");
	}
	else {
		printf("No, it is not a palindrome.");
	}
return 0;
}
