#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char str1[] = "art", str2[] = "xyzratbc";

    int count=0;
    for( int i=0; i< strlen(str1); i++)
    {
        for (int j = 0; i < strlen(str2); j++)
        {
            if( str1[i] == str2[j] )
            {
                count++;
            }
        }
    }


    if( count >= strlen(str1) )
    {
        printf("anogram");
    }
    else
    {
        printf("not an anogram");
    }


    return 0;
}