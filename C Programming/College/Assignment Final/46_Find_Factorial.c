/* Program to find factorial of a number*/
#include <stdio.h>
#include <conio.h>

int main()
{
	int a, i, fact = 1;
	printf("Enter any number: ");
	scanf("%d", &a);
	for(i = 1; i <= a; i++)
	{
		fact = fact * i;
	}
	printf("Factorial of %d is %d", a, fact);
	getchar();
}