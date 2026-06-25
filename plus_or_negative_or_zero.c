/* here we are checking if a integer number
is Positive or Negative or Zero
*/

#include <stdio.h>

int main(void) {
	int number;
	printf("enter a integer number\n");
	scanf("%d", &number);
	if(number > 0) {
		printf("Positive\n");
	}else if(number < 0) {
		printf("Negative\n");
	}else{
		printf("the number is zero\n");
	}




	return 0;
}
