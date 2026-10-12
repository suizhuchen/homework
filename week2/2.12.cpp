#include "stdio.h"  
  
int main()   
{  
    char a;  
    scanf("%c",&a);  
    // char±¾ÖÊ-128~127 
    if (a<'A' || a>'Z'){
    	printf("ÊäÈë´íÎó\n");
    	return 1;
	}
    printf("%c\n",a+32);  
    return 0;  
}  
