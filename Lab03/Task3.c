#include <stdio.h>
#include <stdlib.h>

int main(){
	int num1;
	char alphabet;
	printf("Enter a number between 65 and 90: ");
	scanf("%d",&num1);
	if (num1>90 || num1<65){
	
		printf("Number not in range.");
		return -1;
	}
	else{
	
		alphabet = (char)num1;
		printf("Input -> %d\n",num1);
		printf("Output -> %d = %c",num1,alphabet);
		return 1;

	}
		
		
}