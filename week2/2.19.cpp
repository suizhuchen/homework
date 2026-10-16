#include "stdio.h"

int main(){
	int x,y;
	char a;
	scanf("%d%c%d",&x,&a,&y);
	switch(a){
		case '+':
			printf("%d\n",x+y);
			break;
		case '-':
			printf("%d\n",x-y);
			break;
		case '*':
			printf("%d\n",x*y);
			break;
		case '/':
			(y==0)?printf("不能被0除\n"):printf("%d\n",x/y);
			break;
		default:
			printf("运算符有错\n");
			break;
	}
	return 0;
}
