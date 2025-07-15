#define _CRT_SECURE_NO_WARNINGS
#define TAX_RATE 0.2
#include<stdio.h>

int main() {
	const MONTHS = 12;
	int m_salary, y_salary;

	printf("Type your salary: ");
	scanf("%d", &m_salary);
	y_salary = MONTHS * m_salary;
	printf("Your annual income is %d\n", y_salary);
	printf("Tax you have to pay is  %f", y_salary * TAX_RATE);
}