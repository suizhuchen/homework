#include "stdio.h"  
  
int main()   
{  
    float a;  
    float pi=3.1415926;  
    scanf("%f",&a);  
    printf("面积=%0.2f,周长=%0.2f\n",a*a*pi,2*a*pi);  
    return 0;  
}
