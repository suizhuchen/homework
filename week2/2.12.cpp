#include "stdio.h"  
  
int main()   
{  
    char a;  
    scanf("%c",&a);  
    // char本质-128~127 
    if (a<'A' || a>'Z'){
    	printf("输入错误\n");
    	return 1;
	}
    printf("%c\n",a+32);  
    return 0;  
}  
