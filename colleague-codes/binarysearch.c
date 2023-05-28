#include<stdio.h>
#include<stdlib.h>
int main()
{
     int arr[10] = { 10,20,25,33,45,65,68,69,90,119};
     int key = 90;
     int l=0,r=9,m;
     
     while( l<=r )
     {  
        m=(l+r)/2;
        printf("m %d\nl %d\nr %d\n",m,l,r);
        if(arr[m] == key)
        {
            printf("key elemnt found");
            exit(0);
        }
      
        if ( arr[m]>key)
        {   
            l=m+1;
        }
        
        if(arr[m] < key )
        {
            r=m-1;
        }
     }

     printf("not found");

   


    return 0;
}