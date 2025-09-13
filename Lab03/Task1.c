#include <stdio.h>
#include <stdlib.h>

// run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    float a,b,c,total_marks,percentage;
	printf("Enter marks for 1st Subject: \n");
	scanf("%f",&a);
	printf("Enter marks for 2nd Subject: \n");
	scanf("%f",&b);
	printf("Enter marks for 3rd Subject: \n");
	scanf("%f",&c);
	total_marks = a + b + c;
	percentage = (total_marks/300)*100;
	printf("The total marks of the student is %.2f and percentage is %.2f",total_marks,percentage);
    	
}