#include <stdio.h>

int main()
{
    int hold, i, n = 10;
    int a[10] = {1,6,2,9,4,3,5,8,7,0};
    int key, flag=0;
    printf("Enter key element to search: ");
    scanf("%d",&key);
    for (int i = 0; i < n; i++)
    {
        if (key == a[i])
        {
            flag = 1;
            hold = i;
            break;
        }
    }
    if (flag == 1)
    {
        printf("%d possition.",hold);
    }else{
        printf("ELE not found");
    }
    
    
return 0;
}