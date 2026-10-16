#include "stdio.h"

int main(){
	float a,b;
	scanf("%f%f",&a,&b);
	if (a<b){
		// 法1：数学运算交换变量值->存在精度问题 
		a+=b;
		b=a-b;
		a=a-b;
		// 法2：临时变量交换
//		float temp=b;
//		b=a;
//		a=temp;
	}
	printf("%0.2f,%0.2f\n",a,b);
	
	return 0;
}
