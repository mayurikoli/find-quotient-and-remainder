#include <stdio.h>
int main()
{
	int number1, number2, temp, pos;
	scanf("%d %d", &number1, &number2);
	pos = ((number1<0) || (number2<0)) ? -1 : 1;
	number1 = abs(number1);
	number2 = abs(number2);
	while(number1>=number2)
	{
		number1=number1-number2;
		temp++;

	}

	printf("quoient :%d Remainder :%d\n", pos * temp , number1);
	
	
	return 0;
}
