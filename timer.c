/* here we do from zero until we stop the timer using CTR AND C on terminal
also if we dont stop it the timer will stop at 100
*/


#include<stdio.h>
#include<unistd.h>
int main(void) {
	int counter = 0;

	while  (counter < 100) {
		counter += 1;
		printf("%d\n", counter);
		sleep(1);
		if(counter == 100) {
			break;
		}
	}





	return 0;
}
