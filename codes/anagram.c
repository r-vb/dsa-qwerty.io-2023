#include <stdio.h>
#include <string.h>

int main()
{
            char s1[3] = "art";
            char s2[8] = "xyzratbc";
            int i, j;
            int flag = 0;
        for ( i = 0; i < 3; i++)
        {
            for ( j = 0; j < 8; j++)
            {
                if (s1[i] == s2[j] )
                {
                    if (s2[j] == 'a')
                    {
                        if (s2[j] == 'r')
                        {
                            if (s2[j] == 't')
                            {
                                flag = 1;
                            }
                            
                        }
                        
                    }
                    
                }
                
            }
            
        }
        if (flag == 1)
        {
            printf("is anagram.");
        }
        else
        {
            printf("is not anagram.");
        }
        
        
        
return 0;
}

///////////////////////////////////////////////////////////how possible1???/////////////////////////////////