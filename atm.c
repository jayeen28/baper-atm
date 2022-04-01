#include<stdio.h>
#include<stdlib.h>

/**
 * @brief This function is used for checking the pin user has inserted.
 * If user has inserted wrong pin then it calls itself again.
 */
void checkPin(){
	int pin_number = 1234,pin_input;
	scanf("%d",&pin_input);
	if(pin_input != pin_number){
		printf("Wrong pin. Please try again: ");
		checkPin();
	}
};

int main(){
	printf("Enter your pin: ");
	checkPin();
	return 0;
};
