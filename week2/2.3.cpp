#include "stdio.h"

int main(){
	int max,b;
	scanf("%d%d",&max,&b);
	// 单分支if 
	if (max < b){
		max=b;
	}
	printf("%d\n",max);
	return 0;
}
