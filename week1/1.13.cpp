#include "stdio.h"  
  
int main()   
{  
    int a;  
    scanf("%d",&a);  
    int sqr_before=a*a;  
    int a_new=a+6;  
    int sqr_after=a_new*a_new;  
    printf("%d\n",sqr_after-sqr_before);  
    return 0;  
} 
