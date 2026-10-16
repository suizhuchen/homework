#include "stdio.h"

int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	if (m*4+n*6>=40){
		printf("够坐\n");
	} else {
		printf("不够坐\n");
	}
	// 三元运算符写法 
	//(m*4+n*6>=40)?printf("够坐\n"):printf("不够坐\n");
	return 0;
} 
