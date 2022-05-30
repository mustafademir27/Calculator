#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {

	float number1,number2,answer;
	char operand;

	printf("Enter num1 and num2:");
	scanf("%f %f", &number1, &number2);
	printf("Enter the operation:");
	scanf(" %c", &operand);

	switch (operand)
	{
	case '+':
		printf("\nAddition is selected.\n ");
		answer = number1 + number2;
		break;

	case '-':
		printf("\nSubtraction is selected.\n ");
		answer = number1 - number2;
		break;
	
	case '*':
		printf("\nMultiplication is selected.\n ");
		answer = number1 * number2;
		break;

	case '/':
		printf("\nDivision is selected.\n ");
		answer = number1 / number2;
		break;

	case '^':
		printf("\nPower is selected.\n ");
		answer = pow(number1, number2);
		break;

	default: goto fail;
		break;
	}
	printf("%g %c %g = %g",number1, operand, number2, answer);
	goto exit;
	fail:
	printf("Wrong process.\n");
	exit:
	printf("\n");
	return 0;
}
