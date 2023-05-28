#include<stdio.h>
#define max 5

struct stack
{
    int stack[max];
    int top;
};


void copystack( struct stack *s1,struct stack *s2)
{
    int newtop=-1;
    while(newtop != s1->top)
    {
        s2->stack[++(newtop)] = s1->stack[++(newtop)];
    }
    s2->top = newtop;
}


void push(struct stack *s1,struct stack *s2,int ele)
{
    s1->stack[++(s1->top)] = ele;
    copystack(s1,s2);
}




int pop(struct stack *s1,struct stack *s2)
{
    return (s2->stack[(s2->top)--]);
    copystack(s2,s1);
}



void display(struct stack s)
{
    int i;
    for(i=0;i<=s.top;i++)
    {
        printf(" %d ", s.stack[i]);
    }

}



int main()
{
    struct stack s1,s2;
    int ele,popitem;
    s1.top=-1;
    s2.top=-1;

    int choice;
    for( ; ; )
    {
        printf("\nenter\n1:enqueue\n2:dequeue\n3:displa y");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("enter element to be inserted: ");
                    scanf("%d",&ele);
                    push(&s1,&s2,ele);
                    break;
                    
            case 2: popitem = pop(&s1,&s2);
                    printf("deleted item from queue: %d\n",popitem);
                    break;

            case 3: printf("queue contents are: ");
                    display(s2);
                    break;
                    
            default: printf("invalid");
        }
    }


}

