#include "stdio.h"

int main(){
	int x;
	scanf("%d",&x);
	if (x<0 || x>100){
		printf("非法\n");
	} else {
		printf("合法\n");
	}
	return 0;
}
