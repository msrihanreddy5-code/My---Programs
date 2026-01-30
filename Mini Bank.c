#include <stdio.h>
#include <string.h>
#include <unistd.h>  

int main() {
    char username[50];
    int pin, enteredPin;
    int balance = 100;
    int choice, amount;
    int attempts = 3;

    
    printf("Enter username: ");
    scanf("%49s", username);

    
    printf("Set your 4-digit ATM PIN: ");
    scanf("%d", &pin);

    
    if (pin < 1000 || pin > 9999) {
        printf("Invalid PIN. Please restart and enter a 4-digit PIN.\n");
        return 0;
    }

    
    printf("\n--- Welcome %s to Srihan Mini ATM ---\n", username);
    sleep(1);

    
    while (attempts > 0) {
        printf("Enter your ATM PIN: ");
        scanf("%d", &enteredPin);
        if (enteredPin == pin) {
            printf("PIN Verified.\n");
            break;
        } else {
            attempts--;
            printf("Incorrect PIN. Attempts left: %d\n", attempts);
            if (attempts == 0) {
                printf("Too many failed attempts. Exiting.\n");
                return 0;
            }
        }
    }

    
    do {
        printf("\n===== ATM MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Choose an option (1-4): ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf(" Your current balance is: ₹%d\n", balance);
                break;
            case 2:
                printf("Enter amount to deposit: ₹");
                scanf("%d", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Deposit successful. New balance: ₹%d\n", balance);
                } else {
                    printf("Invalid deposit amount.\n");
                }
                break;
            case 3:
                printf("Enter amount to withdraw (Available ₹%d): ₹", balance);
                scanf("%d", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("Withdrawal successful. New balance: ₹%d\n", balance);
                } else {
                    printf("Invalid amount or insufficient balance.\n");
                }
                break;
            case 4:
                printf(" Thank you for using Srihan Mini ATM. Goodbye!\n");
                break;
            default:
                printf("❗Invalid choice. Please try again.\n");
        }
        sleep(1);
    } while(choice != 4);

    return 0;
}
