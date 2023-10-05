#include<stdio.h>

int main(void){
	
	int x,y;
	
	printf(" enter the number.");
	scanf("%i %i",&x,&y); 
	printf("%i\n",x+y"); 
	printf("%i\n",x*y); 
	printf("%i\n",x-y); 
	printf("%i\n",x/y); 
	printf("두 정수의 나눗셈의 나머지는 %i\n",x%y); 
	
	return 0; 
}
