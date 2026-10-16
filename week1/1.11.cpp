#include "stdio.h"  
  
int main()   
{  
    float a;  
    scanf("%f",&a);  
    printf("%0.2f厘米=%0.2f英寸=%0.2f英尺\n",a,a/2.54,a/30.48);  
    return 0;  
} 
