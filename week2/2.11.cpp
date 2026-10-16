#include "stdio.h"

int main(){
	int t;
	scanf("%d",&t);
	if (t<0){
		printf("固态\n");
	} else if (t>100){
		printf("气态\n");
	} else{
		printf("液态\n");
	}
	return 0;
}
