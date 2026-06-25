/* checking bigger number integer
*/

#include <stdio.h>

int main(void) {
	int num1,num2;
	printf("enter first number\n");
	scanf("%d", &num1);
	printf("enter second number\n");
	scanf("%d", &num2);

	if(num1 > num2) {
		printf("the First number is Bigger\n");
		}else{
			printf("the Second number is Bigger\n");
	}




	return 0;
}
