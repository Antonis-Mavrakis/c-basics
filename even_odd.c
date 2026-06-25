/* we are checking if a integer number
* is even or odd 
*/

#include <stdio.h>


int main(void) {
	int number;
	printf("enter a integer number\n");
	scanf("%d", &number);
	if(number % 2 == 0) {
		printf("the number is Even\n");
	}else{
		printf("the number is odd\n");
	}




	return 0;
}
