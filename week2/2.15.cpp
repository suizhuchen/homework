#include "stdio.h"

int main(){
	char x;
	scanf("%c",&x);
	if (x>='0' && x<='9'){
		printf("Êý×Ö×Ö·û\n");
	} else if (x>='A' && x<='Z'){
		printf("´óÐ´×ÖÄ¸\n");
	} else if (x>='a' && x<='z'){
		printf("Ð¡Ð´×ÖÄ¸\n");
	} else{
		printf("ÆäËû×Ö·û\n");
	}
	return 0;
}
