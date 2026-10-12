#include "stdio.h"

int main(){
	float x,y;
	scanf("%f%f",&x,&y);
	if (x>y){
		printf("%0.2f,%0.2f\n",x,y);
	} else {
		printf("%0.2f,%0.2f\n",y,x);
	}
	return 0;
}
