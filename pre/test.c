#include <stdio.h>

float balance = 0.0;

void deposit(float amount) {
    balance += amount;
    printf("Deposited: $%.2f\n", amount);
}

void withdraw(float amount) {
    if (amount > balance) {
        printf("Insufficient funds!\n");
    } else {
        balance -= amount;
        printf("Withdrawn: $%.2f\n", amount);
    }
}

void checkBalance() {
    printf("Current balance: $%.2f\n", balance);
}

int main() {
    int choice;
    float amount;

    while(1) {
        printf("\n--- Simple Banking System ---\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter amount to deposit: $");
                scanf("%f", &amount);
                deposit(amount);
                break;
            case 2:
                printf("Enter amount to withdraw: $");
                scanf("%f", &amount);
                withdraw(amount);
                break;
            case 3:
                checkBalance();
                break;
            case 4:
                printf("Exiting the banking system. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
