#include<stdio.h>
int x, y ;
void main(void)
{
	printf("enter the two number\n");
	scanf_s("%d %d", &x, &y);
	for (int i = y; i > 0; i--)
	{
		x++; y--;// ++ is an increment operator not a + operator
	}
	printf("the answer is %d", x);
}