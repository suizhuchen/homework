#include "stdio.h"

int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	if (m*4+n*6>=40){
		printf("¹»×ø\n");
	} else {
		printf("²»¹»×ø\n");
	}
	// ÈýÔªÔËËã·ûÐ´·¨ 
	//(m*4+n*6>=40)?printf("¹»×ø\n"):printf("²»¹»×ø\n");
	return 0;
} 
