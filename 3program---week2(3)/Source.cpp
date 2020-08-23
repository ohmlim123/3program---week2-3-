#include<stdio.h>
int main()
{
	int a, b, ans;
	printf("Enter your first number : ");
	scanf_s("%d", &a);
	
	printf("Enter your second number : ");
	scanf_s("%d", &b);
	
	

	int sum = a + b;
	ans = sum;

	printf("Your result is : %d", ans);
	printf("\n");
	
	if (ans >= 50000)
	{
		printf("WOW Wonderful !!!!!");
			}

	return 0;
}