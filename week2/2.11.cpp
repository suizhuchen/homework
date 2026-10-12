#include "stdio.h"

int main(){
	int t;
	scanf("%d",&t);
	if (t<0){
		printf("¹ÌÌ¬\n");
	} else if (t>100){
		printf("ÆøÌ¬\n");
	} else{
		printf("ÒºÌ¬\n");
	}
	return 0;
}
