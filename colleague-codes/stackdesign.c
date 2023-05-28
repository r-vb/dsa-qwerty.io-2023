#include<stdio.h>
int main()
{
    int arr[5] = { 1,2,3,4};
    int top = 3;

   /*   printf("....................\n");
    int i;

    for( i =0; i<=top;i++ )
    {
        printf("| %d ",arr[i]);
        // printf("| %d |\n-----\n",arr[i]); 
    }

    if( top != 5)
    {
        while(i<5) 
        {
            printf("| ");
            i++;
        }
    }

    printf("\n''''''''''''''''''''\n");
    */

   int i;
   printf("\n");
   for(i=4;i>top;i--)
   {
        printf("|   |\n");
        printf("|'''|\n");
   }
    while(i>=0)
    {
        printf("| %d |\n",arr[i]);
        if(i!=0)
        {
        printf("|'''|\n");
        }
        else
        {
            printf("'''''");
        }
        i--;
    }
    return 0;
}