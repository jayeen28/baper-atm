#include<stdio.h>
#include<stdlib.h>

int balance=0;

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

/**
 * @brief This function is used for doing stuffs based on user's choice.
 * If user want to see balance it will show balance.
 * If user want to withdraw money it will check if he has enough money. Otherwise it will show error message.
 * If user want to deposit money it will deposit money.
 * If user want to exit it will exit.
 */
void showOptions(){
	int option;
	printf("Options: \n 1. Balance \n 2. Withdraw \n 3. Deposit \n 4. Exit \n Choice: ");
	scanf("%d",&option);
	if(option == 1){
		printf("Your balance is: %d \n",balance);
		showOptions();
	}
	else if(option == 2){
		int withdraw_amount;
		printf("How much you want to withdraw: ");
		scanf("%d",&withdraw_amount);
		if(withdraw_amount > balance){
			printf("You don't have enough balance. Please try again: \n");
			showOptions();
		}
		else{
			balance = balance - withdraw_amount;
			printf("Your balance is: %d \n",balance);
			showOptions();
		}
	}
	else if(option == 3){
		int deposit_amount;
		printf("How much you want to deposit: ");
		scanf("%d",&deposit_amount);
		balance = balance + deposit_amount;
		printf("Your balance is: %d\n",balance);
		showOptions();
	}
	else if(option == 4){
		printf("Thank you for using your baper ATM. Have a nice day.\n");
		exit(0);
	}
	else{
		printf("Please enter a valid option: ");
		showOptions();
	}
};

int main(){
	printf("/---------- / Welcome to your Baper ATM / ----------\\\n");
	printf("Enter your pin: ");
	checkPin();
	showOptions();
	return 0;
};
