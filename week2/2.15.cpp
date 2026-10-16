#include "stdio.h"

int main(){
	char x;
	scanf("%c",&x);
	if (x>='0' && x<='9'){
		printf("数字字符\n");
	} else if (x>='A' && x<='Z'){
		printf("大写字母\n");
	} else if (x>='a' && x<='z'){
		printf("小写字母\n");
	} else{
		printf("其他字符\n");
	}
	return 0;
}
