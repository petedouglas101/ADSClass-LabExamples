#include <stdio.h>

int main() {
	float accountBalance1, serviceCharge;
	serviceCharge = 0;
	for (int i = 0; i < 5; i++) {

		printf("Please enter a balance: ");
		scanf("%f", &accountBalance1);
		if (accountBalance1 == -100) {
			serviceCharge = 10.0;
			accountBalance1 -= serviceCharge;
			if (accountBalance1 < -100 && accountBalance1 > -500) {
				serviceCharge = 100.0;
				accountBalance1 -= serviceCharge;
				if (accountBalance1 < -700) {
					serviceCharge = accountBalance1 * 2;
					accountBalance1 -= serviceCharge;
				}

				printf("The balance on the account is: %f", accountBalance1);


			}
		}
	}
}