#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define bool int //Defining an int as bool
#define false 0//Defining false as 0
#define true (!false)//Defining true as not false

void main() {

	float accountBalance, serviceCharge, total;
	bool closed = false;

	printf("Enter an account balance: \n");
	scanf("%f", &accountBalance);
	if (accountBalance < 0) {
		serviceCharge = 5.00;
		if (accountBalance < -1000) {
			printf("Your account will now be closed until the debt it cleared!");
			closed = true;
		}
	}

	total = accountBalance - serviceCharge;
	if (!closed) {
		printf("Account balance = %5.2f, Service Charge = %5.2f, Total = %5.2f\n", accountBalance, serviceCharge, total);
	}


}