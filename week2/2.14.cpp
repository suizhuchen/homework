#include "stdio.h"

int main(){
	int x;
	scanf("%d",&x);
	// 四年一闰但百年不闰；四百年又闰。
	// 全部满足取余4=0，满足100=0不取，满足400=0再取 
	if (x%4==0 && (x%100!=0 || x%400==0)){
		printf("闰年\n");
	} else {
		printf("非闰年\n");
	}
	return 0;
}
