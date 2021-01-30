#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	float number1,number2;
	float result;
	char operation;
int main(int argc, char *argv[]) {
	
	printf("Available operations\n");
	printf("- + \n- - \n- * \n- / \n");
	
	printf("Enter the operation: ");
	scanf("%c",&operation);
	
	printf("Enter the number1 :");
	scanf("%f",&number1);
	
	printf("Enter the number2 :");
	scanf("%f",&number2);
	
	switch(operation){
		case '+':
			result = number1 + number2;
			break;
		case '-':
			result = number1 - number2;
			break;
		case '*':
			result = number1 * number2;
			break;
		case '/':
			if(number2 != 0)
				result = number1 / number2;
			break;			
	}
	
	printf("Result = %f",result);
	
	return 0;
}
