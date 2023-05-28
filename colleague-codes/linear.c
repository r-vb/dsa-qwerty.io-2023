#include<stdio.h>
#include<stdlib.h>
int main()
{
     int arr[0] = { 10,20,25,33,45,65,68,69,90,119};
     int key = 44;

    int i;
     for(i=0;i<5;i++)
     {
        if(arr[i] == key)
        {
            printf("key element found ");
            exit(0);
        }
     }
     printf("key element not found");
     return 0;
}