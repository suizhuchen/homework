#include "stdio.h"  
  
int main()   
{  
    int a;  
    float b;  
    double c;  
    char d;  
    scanf("%d%f%lf%c",&a,&b,&c,&d);  
    printf("%d,%0.2f,%0.8f,%c\n",a,b,c,d);  
    return 0;  
} 
