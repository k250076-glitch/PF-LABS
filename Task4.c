#include <stdio.h>
#include <stdlib.h>
int main(){
	float Basic_salary, HRA, DA,Gross_Salary;
	printf("Input basic salary: ");
	scanf("%f",&Basic_salary);
	HRA = Basic_salary * 0.1;
	DA = Basic_salary * 0.05;
	Gross_Salary = Basic_salary + HRA + DA;
	printf("Gross salary is %.2f including HRA and DA",Gross_Salary);
}