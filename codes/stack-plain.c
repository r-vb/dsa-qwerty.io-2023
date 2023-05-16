#include<stdio.h>
#include<stdlib.h>

#define stacksize 5

struct stack{
    int stack[stacksize];
    int top;
};
typedef struct stack STACK;
STACK s;

void push();
int pop();
void display();

int main()
{       int choice;
        s.top = -1;
    for( ; ; ){
        printf("STACK OPERATIONS:\n1. for push\n2. for pop\n3. for display\n4. for exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch (choice){
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: exit(-1);
            default: printf("Invalid Input!!\n");
                    break;
        }
    }
return 0;
}

void push()
{       int item;
    if(s.top == (stacksize - 1)){
        printf("Overflow State!\n");
        return;
    }else{
        printf("Enter the item you would like to push: ");
        scanf("%d",&item);
        ++s.top;
        s.stack[s.top] = item;
    }
}

int pop()
{       int item;
    if(s.top == -1){
        printf("Underflow Condition!\n");
        return(s.top);
    }else{
        item = s.stack[s.top];
        printf("Poped item is = %d\n",s.stack[s.top]);
        --s.top;
    }
return(item);
}

void display()
{       int i;
    if(s.top != -1){
        printf("Stack Contents is/are:-\n");
        printf("\n.....................\n");
        for(i = 0; i <= s.top; i++){
            printf("| %d ",s.stack[i]);
        }
    if ( s.top != 5)
    {
        while (i<5)
        {
            printf("|   ");
            i++;
        }
    }
    
     printf("\n'''''''''''''''''''''\n");
    }else{
        printf("Stack is Empty!!\n");
        return;
        }
}