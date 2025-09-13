#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
	int a,b,temporary;
	printf("a: ");
	scanf("%d",&a);
	printf("b: ");
	scanf("%d",&b);
	printf("Input -> a = %d , b = %d\n",a,b);
	temporary = a;
	a = b;
	b = temporary;
	printf("Output -> a = %d , b = %d",a,b);
		
}