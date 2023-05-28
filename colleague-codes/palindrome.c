#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char exp[50] = "121";

    int stk[50],top=-1;

    for(int i=0;i<strlen(exp);i++)
    {
        stk[++top] = exp[i];
    }

    for(int i=0;i<strlen(exp);i++)
    {
        if( stk[top--] != exp[i])
        {
            printf("not a palindorme ");
            exit(0);
        }
    }

    printf("its a palindrome");

    return 0;
}