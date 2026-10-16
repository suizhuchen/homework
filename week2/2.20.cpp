#include "stdio.h"

int main(){
	int x;
	scanf("%d",&x);
	// 合规写法 
	switch(x){
		case 1:
			printf("January\n");
			break;
		case 2:
			printf("February\n");
			break;
		case 3:
			printf("March\n");
			break;
		case 4:
			printf("April\n");
			break;
		case 5:
			printf("May\n");
			break;
		case 6:
			printf("June\n");
			break;
		case 7:
			printf("July\n");
			break;
		case 8:
			printf("August\n");
			break;
		case 9:
			printf("September\n");
			break;
		case 10:
			printf("October\n");
			break;
		case 11:
			printf("November\n");
			break;
		case 12:
			printf("December\n");
			break;
		default:
			printf("输入错误\n");
			break;
	}
	// 更简洁写法
//	const char *months[]={
//		"January",
//		"February",
//		"March",
//		"April",
//		"May",
//		"June",
//		"July",
//		"August",
//		"September",
//		"October",
//		"November",
//		"December"
//	};
//	if (x>0 && x<13){
//		printf("%s\n",months[x-1]);
//	} else {
//		printf("输入错误\n");
//	}
	return 0;
}
