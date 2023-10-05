#include<stdio.h>

int main(void){
	int x,y,z,m;
	int a,b,c;
	
	x=1;
	y=3;
	z=5;
	a=3;
	b=4;
	c=5;
	
	m=(x+y+z)/3;
	y=a*x*x+b*x+c;
	y=m*x+b;
	
	printf("y=%d,m=%d",y,m);
	
	
	return 0;
}
